#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
   a=a*a;
   b=b*b;
   c=c*c;
    if((a<b+c)&&(b<c+a)&&(c<a+b))
    printf("ACUTE");
    else if(((a>b+c)||(b>c+a)||(c>a+b)))
    printf("OBTUSE");
    else
    if((a=b+c)||(b=c+a)||(c=a+b))
    printf("INVALID");)
    printf("RIGHT");
    return 0; }