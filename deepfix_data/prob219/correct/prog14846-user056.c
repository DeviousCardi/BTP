#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if ((a>b)&&(b>c))
    printf("%d",b);
    else if((a>b)&&(b<c)&&(c<a))
    printf("%d",c);
    else if((b>c)&&(c>a))
    printf("%d",c);
    else if((a==b)&&(a==c))
    printf("%d",c);
    else if((a==b)&&(a>c))
    printf("%d",c);
    else if((a==b)&&(a<c))
    printf("%d",a);
        else if((a==c)&&(b<c))
            printf("%d",b);
             else if((a==c)&&(b>c))
        printf("%d",c);
	return 0; }