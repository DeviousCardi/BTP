#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a==b)&&a>c)
    {printf("%d", c);}
    else if((b==c)&& b>a)
    {printf("%d", a);}
    else if ((c==a)&& c>b)
    {printf("%d", b);}
    else {
    if (a<b) {
        if (a<c)
        if (b<c)
        printf("%d", b);
        else
        printf("%d", c);
        else
        printf("%d", a); }
    else {
        if(a>c)
        if(b>c)
        printf("%d", b);
        else
        printf("%d", c);
        else
        printf("%d", a); } }
	return 0; }