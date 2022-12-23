#include<stdio.h>
int main (){
int arr[]={12,23,43,54,57,87,12};
for (int i = 0; i <
sizeof(arr)/sizeof(int); i++)
{
printf(" the address of index %d is %d\n",i,arr+i);
}
printf("\n");
for (int i = 0; i <
sizeof(arr)/sizeof(int); i++)
{
printf(" the element of index %d is %d\n",i,*(arr+i));
}
return 0;
}