#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<c||a+c<b||b+c<a)
    printf("INVALID");
    else {
        if((a*a<(b*b+c*c))||(b*b<(a*a+c*c))||(c*c<(a*a+b*b)))
        printf("ACUTE");
        if((a*a>(b*b+c*c))||(b*b>(a*a+c*c))||(c*c>(a*a+b*b)))
        printf("OBTUSE");
        if((a*a==(b*b+c*c))||(b*b==(a*a+c*c))||(c*c==(a*a+b*b)))
        printf("RIGHT"); }
    return 0; }