#include<stdio.h>
int main() {
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) {
        if(c>a) {
            x=c;
            y=a;
            z=b; }
        else if(c>b) {
            x=a;
            y=c;
            z=b; }
        else {
            x=a;
            y=b;
            z=c; } }
    else {
        if(c>b) {
            x=c;
            y=b;
            z=a; }
        else if(c>a) {
            x=b;
            y=c;
            z=a; }
        else {
            x=b;
            y=a;
            z=c; } }
    if(x<y+z) {
        if(x*x>y*y+z*z)
        printf("OBTUSE");
        else if(x*x==y*y+z*z)
        printf("RIGHT");
        else
        printf("ACUTE"); }
    else
    printf("INVALID");
    return 0; }