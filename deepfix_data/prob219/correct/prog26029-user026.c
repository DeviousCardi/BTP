#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
if((a!=b) && (a!=c) && (b!=c)) {
if(((a>b) && (b>c))||((c>b)&&(b>a)))
printf("%d",b);
else if(((a>c) && (c>b))||((b>c)&&(c>a)))
printf("%d",c);
else if(((b>a) && (a>c))||((c>a)&&(a>b)))
printf("%d",a); }
else {
    if((a==b)&&(a>c))
    printf("%d",c);
    else if((a==b)&&(c>a))
    printf("%d",a);
    else if((a==c)&&(c>b))
    printf("%d",b);
    else if((c==a)&&(b>c))
    printf("%d",c);
    else if((c==b)&&(c>a))
    printf("%d",a);
    else if((c==b)&&(a>c))
    printf("%d",c); }
return 0; }