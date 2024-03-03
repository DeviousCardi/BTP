#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+c>b)&&(a+b>c)&&(b+c>a)) {
        if((b*b==a*a+c*c)||(a*a==b*b+c*c)||(c*c==a*a+b*b)) {
            printf("RIGHT"); }
        else if((a*a+b*b<c*c)||(b*b+c*c<a*a)||(a*a+c*c<b*b)) {
            printf("OBTUSE"); }
        else
            printf("ACUTE"); }
    else
    printf("INVALID");
    return 0; }