#include <stdio.h>
int main(){
int n = 6,ini=1;
for (int i = 0; i < n; i++){
for (int j = 0; j <= i; j++){
if (j == 0 || j == i){
ini = 1;}
else{
ini = ini * (i - j + 1) / j;}
printf("%d ", ini);}
printf("\n");}
return 0;}