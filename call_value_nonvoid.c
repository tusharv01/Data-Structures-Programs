#include<stdio.h>
int Sum(int a,int b){
return a+b;}
int main(){
int a,b,sum;
printf("enter th number 1: \n");
scanf("%d", &a);
printf("enter th number 2: \n");
scanf("%d", &b);
sum=Sum(a,b);
printf("Sum is :%d",sum);
return 0;}