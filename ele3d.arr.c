#include <stdio.h>
int main(){
int arr[2][2][2]= {12,23,34,45,56,67,78,89};
for (int i = 0; i < 2; i++){
for (int k = 0; k < 2; k++){
for (int j = 0; j < 2; j++){
printf("element of the x=%d, y=%d and z=%d is %d \n", i, k, j, *(*(*(arr + i) + k) + j));
}
}
}
printf("\n");
for (int i = 0; i < 2; i++){
for (int k = 0; k < 2; k++){
for (int j = 0; j < 2; j++){
printf("address of the x=%d, y=%d and z=%d is %d \n", i, k, j, *(*(arr + i) + k) + j);
}
}
}
return 0;}