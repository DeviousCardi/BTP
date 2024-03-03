#include<stdio.h>
int main() {
    int a,b,c,temp;
    if(a<b) {
        if(a>c) {
                temp = b;
                b=a;
                a=temp; }
        else {
                if(c<b) {
                temp = b;
                b=a;
                a=b; }
            else {
                temp = a;
                a=c;
                c=a; } } }
    else {
       if(a<c) {
           temp =c;
           c=a;
           a=temp; } }
    if(a<(b+c)) {
        if(a*a> (b*b + c*c))
        printf("ACUTE");
        else if(a*a < (b*b + c*c))
        printf("OBTUSE");
        else
        printf("RIGHT"); }
    else {
        printf("INVALID"); }
    return 0; }