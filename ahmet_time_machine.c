#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   
   
    char zaman[2];
     char nokta;
     char cokta;
     int saat;
     int dakkika;
     int saniye;
     scanf("%d",&saat);
     scanf("%c",&nokta);
     scanf("%d",&dakkika);
       scanf("%c",&cokta);
     scanf("%d",&saniye);
     scanf("%[^\n]%*c",zaman);
      int saatn;
     if(strcmp(zaman,"PM")==0)
     {

        switch (saat) 
        {
        case 1: saatn=13;
        break;
         case 2: saatn=14;
        break;
         case 3: saatn=15;
        break;
         case 4: saatn=16;
        break;
         case 5: saatn=17;
        break;
         case 6: saatn=18;
        break;
         case 07:
         {
           saatn=19;
         }
        break;

         case 8 : saatn=20;
        break;
         case 9: saatn=21;
        break;
         case 10: saatn=22;
        break;
         case 11: saatn=23;
        break;
         case 12: saatn=00;
        break;
        }
        if(saatn<10 )
        {
            if(dakkika<10)
            {
                 printf("0%d%c0%d%c%d",saatn,nokta,dakkika,cokta,saniye);
            }
            else {
          printf("0%d%c%d%c%d",saatn,nokta,dakkika,cokta,saniye);
            }
        }
        else {
        if(dakkika<10)
            {
                 printf("%d%c0%d%c%d",saatn,nokta,dakkika,cokta,saniye);
            }
            else {
          printf("%d%c%d%c%d",saatn,nokta,dakkika,cokta,saniye);
            }
        }
       
     }
     else if(strcmp(zaman,"AM")==0)
    {

        switch (saat) 
        {
        case 13: saatn=1;
        break;
         case 14: saatn=14;
        break;
         case 15: saatn=3;
        break;
         case 16: saatn=4;
        break;
         case 17: saatn=5;
        break;
         case 18: saatn=6;
        break;
         case 19: saatn=7;
         
        break;

         case 20 : saatn=8;
        break;
         case 21: saatn=9;
        break;
         case 22: saatn=10;
        break;
         case 23: saatn=11;
        break;
         case 00: saatn=12;
        break;
        }
        if(saatn<10 )
        {
            if(dakkika<10)
            {
                 printf("0%d%c0%d%c%d",saatn,nokta,dakkika,cokta,saniye);
            }
            else {
          printf("0%d%c%d%c%d",saatn,nokta,dakkika,cokta,saniye);
            }
        }
        else {
        if(dakkika<10)
            {
                 printf("%d%c0%d%c%d",saatn,nokta,dakkika,cokta,saniye);
            }
            else {
          printf("%d%c%d%c%d",saatn,nokta,dakkika,cokta,saniye);
            }
        }
       
     }
     
    return 0;
}

/*Input (stdin)
07:05:45PM

Your Output (stdout)
4199216:05:45

Expected Output
19:05:45*/

@themanoftalentt
