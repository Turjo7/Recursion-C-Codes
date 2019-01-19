#include<stdio.h>

long Binary(int);

int main(){

    long binaryNo;
    int decimalNo;

    printf("Enter any decimal number: ");
    scanf("%d",&decimalNo);

    binaryNo = Binary(decimalNo);
    printf("Binary value is: %ld",binaryNo);

    return 0;
}

long Binary(int decimalNo){

    static long binaryNo,remainder,factor = 1;

    if(decimalNo != 0){

         remainder = decimalNo % 2;
         binaryNo = binaryNo + remainder * factor;
         factor = factor * 10;
         Binary(decimalNo / 2);
    }

    return binaryNo;
}
