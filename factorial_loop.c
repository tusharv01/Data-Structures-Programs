#include <stdio.h>
int main(){
int num;
printf("enter the number : \n");
scanf("%d", &num);
int temp = 1;
for (int i = num; i > 0; i--){
temp = temp * i;}
printf("%d",temp);
return 0;}