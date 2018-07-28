#include <iostream>
bool isunsignediterger(char **string){
    char* before=*string;
    while(**string!='\0'&&**string>='0'&&**string<='9')
        (*string)++;
    return *string>before;
}
bool isinterger(char** string){
    if(**string=='+'||**string=='-')
        (*string)++;
    return isunsignediterger(string);
}

bool isNumeric(char* string)
{
    if(string== nullptr)
        return false;
    bool numeric=isinterger(&string);
    if(*string=='.'){
        string++;
        numeric=isunsignediterger(&string)||numeric;
    }
    if(*string=='e'||*string=='E'){
        string++;
        numeric=numeric&&isinterger(&string);
    }
    return numeric&&*string=='\0';
}

int main() {
    char *a="123.45e+6";
    std::cout << isNumeric(a) << std::endl;
    return 0;
}