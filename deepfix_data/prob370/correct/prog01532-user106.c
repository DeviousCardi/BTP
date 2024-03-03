#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<c&&b+c<a&&c+a<b) {
        printf("INVALID\n"); }
    if(a*a+b*b>c*c||b*b+c*c>a*a||c*c+b*b>a*a) {
        printf("ACUTE\n"); }
    if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b) {
        printf("RIGHT\n"); }
    if((a*a+b*b>c*c)&&(b*b+c*c<a*a)&&(c*c+a*a<b*b)) {
        printf("OBTUSE\n"); }
    return 0; }