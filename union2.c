
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union data{
    char surname[100];
    char name[100];
    int age;
};

int main(){
    union data veri;

    printf("enter your name; ");
    scanf("%s",veri.name);
    printf("enter your surname; ");
    scanf("%s",veri.surname);
    printf("enter your age; ");
    scanf("%d",&veri.age);

  char x= strcmp (veri.name,"sude")==0 && strcmp (veri.surname,"öztaş")==0 && veri.age==19){
        printf("welcome sude");
    }
    else{
        printf("you are not sude");
    }

    return 0;
}










