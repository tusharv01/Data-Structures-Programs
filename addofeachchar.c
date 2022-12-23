#include<stdio.h>
int main (){
char arr[100];
int a ;
scanf("%d",&a);
for (int i = 0; i <=a; i++){
scanf("%c",&arr[i]);}
for (int i = 0; i <= a; i++){
printf("%c",arr[i]);}
printf("\n");
for (int i = 0; i <= a; i++){
printf("the address of the character %c is %d\n",*(arr+i),arr+i);}
return 0;}