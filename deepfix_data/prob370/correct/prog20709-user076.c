#include<stdio.h>
int main() {
    int a,b,c,p,q,temp,pu,pl,su;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0) {
        if(a>b && b>c) {
            temp=a;
            a=c;
            c=temp; }
        if(b>a  && a>c) {
            pu=b;
            b=c;
            c=pu; }
        if(b>c &&  c>a) {
           su= b;
            b=c;
            c=su; }
        if(a>c && c>b) {
            pl=a;
            a=c;
            c=pl; }
 p = (a*a)+(b*b);
    q = (c*c);
        if(a==b && b==c) {
            printf("ACUTE"); }
        else {
            if(p==q) {
            printf("RIGHT"); }
        else if(p<q) {
            printf("OBTUSE"); }
        else if(p>q) {
            printf("ACUTE"); } } }
    else {
        printf("INVALID"); }
    return 0; }