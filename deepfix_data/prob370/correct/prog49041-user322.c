#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b) {
        if (c>=a&&c>=b){
            if(a*a+b*b==c*c){
                printf("RIGHT"); }
            else if(a*a+b*b<c*c){
                printf("OBTUSE"); }
            else if(a*a+b*b>c*c){
                printf("ACUTE"); } }
        else if(a>=b&&a>=c){
            if(b*b+c*c==a*a){
                printf("RIGHT"); }
            else if(b*b+c*c<a*a){
                printf("OBTUSE"); }
            else if(b*b+c*c>a*a){
                printf("ACUTE"); } }
        else if(b>=a&&b>=c){
            if(a*a+c*c==b*b){
                printf("RIGHT"); }
            else if(a*a+c*c<b*b){
                printf("OBTUSE"); }
            else if(a*a+c*c>b*b){
                printf("ACUTE"); } } }
    else {
        printf("INVALID"); }
    return 0; }