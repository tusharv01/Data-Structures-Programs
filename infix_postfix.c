#include <stdio.h>
#include <ctype.h>
char arr[100];
int top = -1;
void push(char x){
arr[++top] = x;}
char pop(){
if (top == -1)
return -1;
else
return arr[top--];}
int prio(char x){
if (x == '(')
return 0;
if (x == '+' || x == '-')
return 1;
if (x == '*' || x == '/')
return 2;
return 0;}
int main(){
char exp[100] = {'a','+','b','(','c','-','v','*','b','/',')','+','d','*'};
char *e, x;
e = exp;
while (*e != '\0'){
if (isalnum(*e))
printf("%c", *e);
else if (*e == '(')
push(*e);
else if (*e == ')'){
while ((x = pop()) != '(')
printf("%c", x);}
else{
while (prio(arr[top]) >= prio(*e))
printf("%c", pop());
push(*e);}
e++;}
while (top != -1){
printf("%c", pop());}
printf("\n");
return 0;}