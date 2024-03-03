#include<stdio.h>
int main() {
    int m;
    int n;
    int p;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&p);
    if ((a+b>c)&&(b+c>a)&&(c+a>b)) {
        if(c*c<a*a+b*b) {
            printf("ACUTE"); }
        else if (c*c==a*a+b*b) {
            printf("RIGHT"); }
        else if (c*c>a*a+b*b) {
            printf("OBTUSE"); } }
    else {
        printf("INVALID"); }
    return 0; }