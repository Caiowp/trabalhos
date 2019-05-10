#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int divinteira(int val, int ind){
    int cont=0, flag=0;
    if (val<0){
        val-=2*val;
        flag=1;
    }
    while (ind<=val){
        val=val-ind;
        cont++;
    }
    if (flag) cont-=2*cont;
    return cont;
}
int main()
{
    int num, i, div;
    char numstring[1000];
    strcpy(numstring, "");
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num>=1000){
        div=divinteira(num, 1000);
        for (i=0;i<div; i++){
            strcat(numstring, "M");
        }

        num-=divinteira(num, 1000)*1000;
    }
    if(num>=900){
        strcat(numstring, "CM");
        num-=900;
    }
    if(num>=500){
        strcat(numstring, "D");
        num-=500;
    }
    if(num>=400){
        strcat(numstring, "CD");
        num-=400;
    }
    if(num>=100){
        div=divinteira(num, 100);
        for (i=0;i<div; i++){
            strcat(numstring, "C");
        }
        num-=divinteira(num, 100)*100;
    }
    if(num>=90){
        strcat(numstring, "XC");
        num-=90;
    }
    if(num>=50){
        div=divinteira(num, 50);
        for (i=0;i<div; i++){
            strcat(numstring, "L");
        }
        num-=divinteira(num, 50)*50;
    }
    if(num>=40){
        strcat(numstring,"XL");
        num-=40;
    }
    if(num>=10){
        div=divinteira(num, 10);
        for (i=0;i<div; i++){
            strcat(numstring, "X");
        }
        num-=divinteira(num, 10)*10;
    }
    if(num>=9){
        strcat(numstring, "IX");
        num-=9;
    }
    if(num>=5){
        strcat(numstring, "V");
        num-=5;
    }
    if(num>=4){
        strcat(numstring, "IV");
        num-=4;
    }
    if(num>=1){
        div=divinteira(num, 1);
        for (i=0;i<div; i++){
            strcat(numstring, "I");
        }
    }
    printf("\n%s",numstring);
    return 0;
}
