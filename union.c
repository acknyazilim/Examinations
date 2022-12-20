// This is about a union
#include <stdio.h>
#include <stdlib.h>
#define pi  3.14
union islem{
float cevre;
float alan;
}daire;

int main()
{
    printf("lutfen dairenin yaricapini giriniz!\n");
    int r;
    scanf("%d",&r);
    daire.alan=pi*r*r;
    daire.cevre=2*pi*r;
    printf("dairenin alani: %f\n",daire.alan);
     printf("dairenin cevresi: %f\n",daire.cevre);
    return 0;
}

