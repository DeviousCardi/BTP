#include<stdio.h>
int main() {
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b) {
        if(a>c) {
                temp = b;
                b=a;
                a=temp; }
        else {
                if(c<b) {
                temp = b;
                b=a;
                a=temp; }
            else {
                temp = a;
                a=c;
                c=temp; } } }
    else {
       if(a<c) {
           temp =c;
           c=a;
           a=temp; } }
    if(b>0 && c>0) {
    if(a<(b+c)) {
        if(a*a<(b*b + c*c))
        printf("ACUTE");
        else if(a*a > (b*b + c*c))
        printf("OBTUSE");
        else
        printf("RIGHT"); }
    else {
        printf("INVALID"); } }
    else
    printf("INVALID");
    return 0; }