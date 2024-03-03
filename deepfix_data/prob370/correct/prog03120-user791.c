#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c||a+c>b||b+c>a){
        if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b){
            printf("RIGHT"); }
        else if(a*a+b*b>c*c&&b*b+c*c>a*a&&a*a+c*c>b*b){
            printf("ACUTE"); }
        else if(a*a+b*b<c*c||b*b+c*c<a*a||a*a+c*c<b*b){
            printf("OBTUSE"); } }
    else{
        printf("INVALID"); }
    return 0; }