#include <stdio.h>
int narr[100];
void rev(int *arr, int last, int first){
if (first >= last){
return;}
else{
int temp;
temp = arr[first];
arr[first] = arr[last];
arr[last] = temp;}
rev(arr, last - 1, first + 1);}
void trav(int arr[], int size){
for (int i = 0; i < size; i++){
printf("%d ", arr[i]);}
printf("\n");}
int main(){
int arr[] = {30,29,34,45,55,56,7};
int s = sizeof(arr) / sizeof(int);
trav(arr, s);
rev(arr, s - 1, 0);
trav(arr, s);
return 0;}