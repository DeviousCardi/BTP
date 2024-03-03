#include<stdio.h>
int main() {
    int a,b,c,min;
    scanf("%d%d%d",&a,&b,&c);
    if ((a*a+b*b>=c*c)&&(b*b+c*c>=a*a)&&(a*a+c*c>=b*b)) {
        if ((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b)) {
        printf("RIGHT"); }
        else if(((c>=a)&&(c>=b))&&(c*c>a*a+b*b))||((a>=b)&&(a>=c))&&(a*a>b*b+c*c)||((b>=a)&&(b>=c))&&(b*b>a*a+c*c)) {
        printf("OBTUSE"); }
        else {
        printf("ACUTE"); } }
    else printf("INVALID");
    return 0; }