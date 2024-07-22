#include<stdio.h>


int main(){
    /*Implicite type casting /automatic type casting --------------
    it takes fist max information storeer from the data type and the 
    convert to data type we need in ans*/
    int num1=12;
    float num2=12.4;

    float ans= num1+num2;
    
    char a=num1;


    /*Explicte / Manual type casting is type of type casting wchich use
     type casting funcion / operator (int)value
    to convert one data type to another data type then compiler follow
    steps of covesion of auto /implecite type casting  */
/*
int/int= int
int/float=float
flout/int=float
*/
    int num3=12;
    float num4=12.4;
    float ans1= num3+(int)num4;










    return 0;
}




