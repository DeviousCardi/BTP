#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a) {
        if (a<c && b<c) {
        if(a*a + b*b ==c*c ) {
            printf("RIGHT"); }
        if(a*a+b*b>c*c) {
            printf("ACUTE"); }
        if(a*a+b*b<c*c) {
            printf("OBTUSE"); } }
        if(a<b && c<b) {
            if(a*a+c*c==b*b) {
                printf("RIGHT"); }
            if(a*a+c*c>b*b) {
                printf("ACUTE"); }
            if(a*a+c*c<b*b) {
                printf("OBTUSE"); } }
        if(c<a && b<a) {
           if(c*c+b*b==a*a) {
               printf("RIGHT"); }
           if(c*c+b*b>a*a) {
               printf("ACUTE"); }
           if(c*c+b*b<a*a) {
               printf("OBTUSE"); } } }
        else {
            printf("INVALID"); }
    return 0; }