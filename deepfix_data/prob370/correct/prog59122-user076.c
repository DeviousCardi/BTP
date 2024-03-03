#include<stdio.h>
int main() {
    int a,b,c,p,q;
    scanf("%d%d%d",&a,&b,&c);
    p = (a*a)+(b*b);
    q = (c*c);
    if(p==q){
        printf("RIGHT"); }
    else if(p>q){
        printf("OBTUSE"); }
    else if(p<q){
        printf("ACUTE"); }
    else {
        printf("INVALID"); }
    return 0; }