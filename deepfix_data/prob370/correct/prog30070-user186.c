#include<stdio.h>
int main() {
    int a,b,c,swap;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b) {
        swap=b;
        b=a;
        a=swap; }
    if(a<c) {
        swap=c;
        c=a;
        a=swap; }
    if(a>=(b+c)) {
        printf("INVALID"); }
    else if((a*a)>(b*b)+(c*c)) {
        printf("OBTUSE"); }
    else if((a*a)==(b*b)+(c*c)) {
        printf("RIGHT"); }
    else if((a*a)<(b*b)+(c*c)) {
        printf("ACUTE"); }
    return 0; }