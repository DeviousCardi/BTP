#include<stdio.h>
int main() {
    int m;
    int n;
    int p;
    int a;
    int b;
    int c;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&p);
    if (m>n){
        if(p>m){
            c=p;
            a=m;
            b=n; }
        else{
            c=m;
            a=n;
            b=p; } }
    else {
        if(p>n){
            c=p;
            a=m;
            b=n; }
        else{
            c=n;
            a=m;
            b=p; } }
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