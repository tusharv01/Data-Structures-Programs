#include <stdio.h>
int n = 1000;
void min(int arr[], int size){
if (size <= 0){
printf("the smallest element of array is %d\n", n);}
else{
if (n > arr[size - 1]){
n = arr[size - 1];}
min(arr, size - 1);}}
int main(){
int arr[] = {30, 29, 34, 45, 55, 56, 71};
int s = sizeof(arr) / sizeof(int);
min(arr, s);
return 0;}