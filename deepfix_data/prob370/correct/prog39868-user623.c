#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    a=a*a;
    b=b*b;
    c=c*c;
    if((a=b+c)||(b=c+a)||(c=a+b)) {
        printf("RIGHT"); }
    else
    if((c<a+b)) {
        printf("OBTUSE"); }
    else
    if((c>a+b))
    printf("ACUTE");
    else
    printf("INVALID");
    return 0; }