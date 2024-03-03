#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a=b)>c)
    {printf("%d\n", c);}
    else if((b=c)>a)
    {printf("%d\n", a);}
    else if ((c=a)>b)
    {printf("%d\n", b);}
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