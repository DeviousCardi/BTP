#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a<b || (a=b) > c) {
        if (a<c || (a=c) > b)
        if (b<c || (b=c) > a)
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
        printf("%d", a); }
	return 0; }