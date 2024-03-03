#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c>a && c>b) {
    if((c*c)==((a*a)+(b*b)))
    printf("RIGHT");
    else if((c*c)<((a*a)+(b*b)))
    printf("ACUTE");
    else if((c*c)>((a*a)+(b*b)))
    printf("OBTUSE");
    else
    printf("INVALID"); }
    return 0; }