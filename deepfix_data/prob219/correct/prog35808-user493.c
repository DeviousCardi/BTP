#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b)
        printf("%d",c);
    if(a==c)
        printf("%d",b);
    if(b==c)
        printf("%d",a);
    else if (((a>b)&&(b>c))||((c>b)&&(b>a)))
        printf("%d",b);
    else if(((b>a)&&(a>c))||((c>a)&&(a>b)))
        printf("%d",a);
    else if(((b>c)&&(c>a))||((a>c)&&(c>b)))
	    printf("%d",c);
    return 0; }