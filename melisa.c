//bug 

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
    typedef union
    {
        char name[10];
        int flag;
        float ondalik;
    } data;
    
    data veri={"Akif"};
    printf("%s\n",veri.name);
    veri.flag = 1;
    printf("%d\n",veri.flag);
    veri.ondalik = 1.5;
    printf("%f\n",veri.ondalik);
    
    return 0;
    
}
