#include<stdio.h>
long int Factorial(int x){
if(x<1){
return 1;}
else
return x * Factorial(x-1);}
int main (){
int num;
printf("enter th number : \n");
scanf("%d", &num);
printf("the factorial of %d is %d",num,Factorial(num));
return 0;}