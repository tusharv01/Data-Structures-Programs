#include<stdio.h>
void SWAP(int a,int b){
int temp=a;
a=b;
b=temp;
printf("After Swapping number 1 is %d and number 2 is %d",a,b);}
int main (){
int num1,num2;
printf("enter th number 1: \n");
scanf("%d", &num1);
printf("enter th number 2: \n");
scanf("%d", &num2);
SWAP(num1,num2);
return 0;}