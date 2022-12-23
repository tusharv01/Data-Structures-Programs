#include<stdio.h>
int main(){
int arr[]={12,132,15,31,52,845};
int *p=arr;
printf("%d\n",*p);
(*p)++;
printf("%d\n",*p);
*(p++);
printf("%d\n",*p);
return 0;}