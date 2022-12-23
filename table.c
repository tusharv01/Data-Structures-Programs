#include<stdio.h>
int i=1;
int Table(int a){
if(i==11){
return 0;}
printf("%d x %d = %d\n",a,i,a * i);
i++;
return Table (a);}
int main(){
int num;
printf("enter the number : \n");
scanf("%d", &num);
Table(num);
return 0;}