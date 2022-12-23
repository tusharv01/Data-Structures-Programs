#include <stdio.h>
struct test
{
    int i;
    char *c;
};
struct test st[] = {
    5, "because",
    4, "begin",
    6, "fumble",
    7, "ancient",
    8, "bring"};
int main()
{
    struct test *p = st;
    p += 1;
    printf("%s\n", ++(p++->c));
    printf("%c\n", *++p->c);
    printf("%d\n", p[0].i);
    printf("%s\n", p->c);
    return 0;
}