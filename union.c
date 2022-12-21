
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

enum gunler {
    pazartesi,
    sali,
    carsamba,
    persembe,
    cuma,
    cumartesi,
    pazar
};

union gun {
    enum gunler days;
    char name[10];
};

int main() {
    union gun day;
    day.days = cuma;
    printf("%d ", day.days);
    strcpy(day.name, "cuma");
    printf("%s", day.name);
    if(strcmp(day.name,"cuma")==0){
        printf("\nbugün cuma");
    }
    else{
        printf("bugün cuma değil");
    }
    return 0;

}
