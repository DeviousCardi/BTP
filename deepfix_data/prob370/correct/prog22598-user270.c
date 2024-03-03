#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c)&&(b+c>a)&&(a+c>b)) {
        if ((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b)) {
        printf("RIGHT"); }
        else if( (((c>=a)&&(c>=b))&&(c*c>a*a+b*b))||(((a>=b)&&(a>=c))&&(a*a>b*b+c*c))||(((b>=a)&&(b>=c))&&(b*b>a*a+c*c)) ) {
        printf("OBTUSE"); }
        else {
        printf("ACUTE"); } }
    else printf("INVALID");
    return 0; }