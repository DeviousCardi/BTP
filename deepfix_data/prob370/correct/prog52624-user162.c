#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b<c)&&(b+c<a)&&(a+c<b)){
        printf("INVALID"); }
    if ((a*a+b*b>c*c)||(b*b+c*c>a*a)||(a*a+c*c>b*b)){
        printf("ACUTE"); }
    if ((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+b*b==c*c)){
        printf("RIGHT"); }
    if ((a*a+b*b<c*c)||(b*b+c*c<a*a)||(a*a+c*c<b*b)){
        printf("OBTUSE"); }
    return 0; }