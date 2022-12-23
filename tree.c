#include <stdio.h>
#include <stdlib.h>
struct Tree{
int data;
struct Tree *prev;
struct Tree *next;};
int max(int a, int b){
if (b > a){
return b;}
return a;}
struct Tree *create(int var){
struct Tree *floatn = (struct Tree
*)malloc(sizeof(struct Tree));
floatn->data = var;
floatn->prev = 0;
floatn->next = 0;
return floatn;}
int height(struct Tree *root){
if (root == 0){
return 0;}
return (max(height(root->prev),
height(root->next)) + 1);}
int inTrav(struct Tree *root){
if (root == 0){
return;}
inTrav(root->prev);
printf("%d ", root->data);
inTrav(root->next);}
int nleaf(struct Tree *root){
struct Tree *ptr = root;
static int sum = 0;
if (ptr->next == 0 && ptr->prev == 0){
sum = sum + 1;
return 0;}
nleaf(ptr->prev);
nleaf(ptr->next);
return sum;}
int tleaf(struct Tree *root){
struct Tree *ptr = root;
static int sum = 0;
sum = sum + 1;
if (ptr->next == 0 && ptr->prev == 0){
return 0;}
tleaf(ptr->prev);
tleaf(ptr->next);
return sum;}
int main()
{ /*
        100
       /   \
      45   105
     / \   / \
    15 49  99 156
     */
struct Tree *root = create(100);
struct Tree *elem1 = create(45);
struct Tree *elem2 = create(105);
struct Tree *elem11 = create(15);
struct Tree *elem12 = create(49);
struct Tree *elem21 = create(125);
struct Tree *elem22 = create(175);
root->next = elem2;
root->prev = elem1;
root->next->next = elem22;
root->next->prev = elem21;
root->prev->next = elem12;
root->prev->prev = elem11;
printf("Q1:- Traverse :\n");
inTrav(root);
int a = tleaf(root);
int b = nleaf(root);
printf("\nQ2:- total nodes :%d", a);
printf("\nQ3:- leaf nodes :%d", b);
printf("\nQ4:- internal nodes :%d", a - b);
printf("\nQ5:- Height :%d", height(root) -1);
}