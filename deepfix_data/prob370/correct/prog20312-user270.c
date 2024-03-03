#include<stdio.h>
int main() {
    int a,b,c,min;
    scanf("%d%d%d",&a,&b,&c);
    if ((a*a+b*b>=c*c)&&(b*b+c*c>=a*a)&&(a*a+c*c>=b*b)) {
        if ((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b)) {
        printf("RIGHT"); }
        else if((c*c>a*a+b*b)||(a*a>b*b+c*c)||(b*b>a*a+c*c)) {
        printf("OBTUSE"); }
        else if((c*c<a*a+b*b)||(a*a<b*b+c*c)||(b*b<a*a+c*c)) {
        printf("ACUTE"); } }
    else printf("inavlid");
    return 0; }