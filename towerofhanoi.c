#include <stdio.h>
void Toh(int n, int A, int B, int C){
if (n > 0){
Toh(n - 1, A, C, B);
printf("(%d,%d)\n", A, C);
Toh(n - 1, B, A, C);}}
int main(){
Toh(4, 1, 2, 3);
return 0;}