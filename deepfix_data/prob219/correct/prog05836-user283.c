#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a==b)&& a>c)
    printf("%d",c);
    if((b==c)&& b>a)
    printf("%d",a);
    if((a==c)&& a>b)
    printf("%d",b);
    else{
    if(a<=b) {
        if(a<=c) {
            if(b<=c) {
                printf("%d",b); }
        else {
            printf("%d",c); } }
    else {
        printf("%d",a); } }
else {
    if(b<=c) {
        if(a<=c) {
            printf("%d",a); }
        else {
            printf("%d",c); } }
    else {
        printf("%d",b); } } }
    return 0; }