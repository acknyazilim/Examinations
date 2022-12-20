#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
    typedef union
    {
        int integer;
        float ondalik;
        char str[20];
    }veri;
    veri data;
    data.integer=5;
    data.ondalik=5.5;
    strcpy(data.str,"melisa");
    if(strcmp(data.str,"melisa")==0)
    {
        printf("Merhaba %s",data.str);
    }
    
    return 0;
}
