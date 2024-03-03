#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a) {
        if(a*a + b*b ==c*c ) {
            printf("RIGHT"); }
        if(a*a+b*b>c*c) {
            printf("ACUTE"); }
        if(a*a+b*b<c*c) {
            printf("OBTUSE"); }
        else {
            printf("INVALID"); } }
    return 0; }