#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b+c||b>=a+c||c>=a+b) {
        printf("INVALID"); }
    else {
        if (a>b) {
            if(a>c) {
                if(a*a<b*b+c*c)
                printf("ACUTE");
                else if(a*a==b*b+c*c)
                printf("RIGHT");
                else
                printf("OBTUSE"); }
            else if(a<c) {
                if(b>c) {
                    if(b*b<a*a+c*c)
                    printf("ACUTE");
                    else if(b*b==a*a+c*c)
                    printf("RIGHT");
                    else
                    printf("OBTUSE"); }
                else if(c>b) {
                    if(c*c<b*b+a*a)
                    printf("ACUTE");
                    else if(c*c==b*b+a*a)
                    printf("RIGHT");
                    else
                    printf("OBTUSE"); } } } } }