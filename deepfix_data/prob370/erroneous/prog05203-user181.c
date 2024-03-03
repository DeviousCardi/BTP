#include<stdio.h>
int main() {
    int e,d,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b) {
        if(c>=a)
         d=c;
         else
         d=a; }
    else {
        if(c>=b)
        d=c;
        else(b>=c)
        d=b; }
    e=a*a+b*b+c*c-2*d*d;
    if(a+b+c>=2*d)
    printf("INVALID");
    else if(e>0)
    printf("ACUTE");
    else if(e<0)
    printf("OBTUSE");
    else (e==0);
    printf("RIGHT");
    return 0; }