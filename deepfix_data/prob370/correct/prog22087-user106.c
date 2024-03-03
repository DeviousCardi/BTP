#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<c&&b+c<a&&c+a<b) {
        printf("INVALID"); }
    if(a*a+b*b<c*c&&b*b+c*c<a*a&&c*c+b*b<a*a) {
        printf("ACUTE"); }
    if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b) {
        printf("RIGHT"); }
    if(a*a+b*b>c*c||b*b+c*c>a*a||c*c+a*a>b*b) {
        printf("OBTUSE"); }
    return 0; }