#include<stdio.h>
int main() {
    int a; scanf("%d",&a);
    int b; scanf("%d",&b);
    int c; scanf("%d",&c);
    if((a>=b)&&(a>=c)){
        if (a>=b+c) printf("INVALID");
        else if (a*a<b*b+c*c) printf("ACUTE");
        else if (a*a==b*b+c*c) printf("RIGHT");
        else printf("OBTUSE"); }
    else if((b>=a)&&(b>=c)){
        if (b>=a+c) printf("INVALID");
        else if (b*b<a*a+c*c) printf("ACUTE");
        else if (b*b==a*a+c*c) printf("RIGHT");
        else printf("OBTUSE"); }
    else {
        if (c>=b+a) printf("INVALID");
        else if (c*c<b*b+a*a) printf("ACUTE");
        else if (c*c==b*b+a*a) printf("RIGHT");
        else printf("OBTUSE"); }
    return 0; }