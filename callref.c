#include<stdio.h>
void Factorial(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int main (){
int num1,num2;
printf("enter th number 1: \n");
scanf("%d", &num1);
printf("enter th number 2: \n");
scanf("%d", &num2);
Factorial(&num1,&num2);
printf("After Swapping number 1 is %d and number 2 is %d",num1,num2);
return 0;
}