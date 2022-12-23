#include<stdio.h>
int fib(int n){
if (n <= 1) return n;
int a = fib(n - 1) + fib(n - 2);
return a;}
int main(){
int a;
scanf("%d", &a);
printf("%dth element is %d", a, fib(a));
printf("\n");
int slow = 0, fast = 1, sum = 0;
printf("0 1 ");
for (int i = 2; i <= a; i++){
sum = fast + slow;
slow = fast;
fast = sum;
printf("%d ", sum);}
return 0;}