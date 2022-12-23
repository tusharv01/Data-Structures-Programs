#include <stdio.h>
int top = -1;
int arr[2];
int push(int data){
if (top >= 19){
printf("stack is overflow\n");}
else
top++;
arr[top] = data;}
int pop(){
int y;
if (top == -1){
printf("stack is underflow\n");}
else
y = arr[top];
top--;
return y;}
int trav(){
for (int i = 0; i <= top; i++){
printf("%d\n", arr[i]);}}
int main(){
push(1);
push(9);
push(6);
push(2);
push(7);
push(1);
pop();
trav();}