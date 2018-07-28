#include <iostream>
bool invalidinput= false;
double PowerWithUnsignedExponent(double base,unsigned int exponent){
    if(exponent==0)
        return 1;
    if(exponent==1)
        return base;
    double result=PowerWithUnsignedExponent(base,exponent>>1);
    result*=result;
    if(exponent&1)
        result*=base;
    return result;
}
double Power(double base, int exponent) {
    if(base==0.0&&exponent<=0){
        invalidinput= true;
        return 0.0;
    }
    unsigned int absexponent=(unsigned int)(exponent);
    if(exponent<0)
        absexponent=(unsigned int)(-exponent);
    double result=PowerWithUnsignedExponent(base,absexponent);
    if(exponent<0)
        result=1.0/result;
    return result;
}
int main() {
    std::cout << 0x1 << std::endl;
    return 0;
}