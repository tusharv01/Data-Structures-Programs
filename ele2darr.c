#include<stdio.h>
int main (){
int arr[3][3]={12,23,34,45,56,67,78,89,90};
for (int i = 0; i < 3; i++){
for (int j = 0; j < 3; j++){
printf("element of the row %d and column %d is %d \n",i,j,*(*(arr+i)+j));
}
}
printf("\n\n");
for (int i = 0; i < 3; i++){
for (int j = 0; j < 3; j++){
printf("address of the row %d and column %d is %d \n",i,j,*(arr+i)+j);
}
}
return 0;
}