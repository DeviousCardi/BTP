#include<stdio.h>
int main() {
    int a,b,c,p,q;
    scanf("%d%d%d",&a,&b,&c);
if(a>0 && b>0 && c>0){
    if(a>b>c){
        a=c;
        c=a; }
    if(b>a>c){
        b=c;
        c=b; }
    if(b>c>a){
        b=c;
        c=b; }
    if(a>c>b){
        a=c;
        c=a; }
    else{c=c}
    p = (a*a)+(b*b);
    q = (c*c);
        if(a==b && b==c){
            printf("ACUTE"); }
        else if{
    if(p==q{
        printf("RIGHT"); }
    else if(p<q){
        printf("OBTUSE"); }
    else if(p>q){
        printf("ACUTE"); } }
    else {
        printf("INVALID"); }
    return 0; }