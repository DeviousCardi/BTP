#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d\n%d\n%d\n",&a,&b,&c);
    if (a<(b+c)&&b<(c+a)&&c<(a+b)) {
        if (b*b<c*c+a*a||c*c<a*a+b*b||a*a<b*b+c*c) {
            printf("ACUTE"); }
        else if(b*b>a*a+c*c&&a*a>b*b+c*c&&c*c>a*a+b*b) {
            printf("OBTUSE"); }
        else if(b*b==a*a+c*c&&a*a==b*b+c*c&&c*c==a*a+b*b) {
            printf("RIGHT"); } }
    else {
        printf("INVALID"); }
    return 0; }