#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c) {
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c); }
    if(b>a&&b>c) {
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c); }
    if(c>a&&c>b) {
        if(b>a)
            printf("%d",b);
        else
            printf("%d",a); }
    if(a==b)
        printf("%d",c);
    if(b==c)
        printf("%d",a);
    if(a==c)
        printf("%d",b);
	return 0; }