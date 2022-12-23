#include<stdio.h>
int main (){
static int a =9;
int b=9;
if(a<25){
printf("Static is %d and non static is %d\n ",a,b);
a++;
b++;
main();}
return 0;}