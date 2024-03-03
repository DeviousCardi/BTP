#include<stdio.h>
int main() {
    int a,b,c,a2,b2,c2;
    scanf("%d%d%d",&a,&b,&c);
    a2=a*a;
    b2=b*b;
    c2=c*c;
    if(a2==b2+c2||b2==c2+a2||c2==a2+b2)
    printf("RIGHT");
    else {
        if(a<b+c||b<a+c||c<a+b) {
            if(a2>=b2+c2||b2>==a2+c2||c2>=a2+b2)
            printf("OBTUSE");
            else
            printf("ACUTE"); }
        else
        printf("INVALID") }
    return 0; }