#include<stdio.h>
int main() {
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b) {
        if(a<c) {
           x=a;
           if(b<c) {
               y=b;
               z=c; }
           else {
               y=c;
               z=b; } }
        else {
            x=c;
            y=a;
            z=b; } }
    else {
        if(b<c) {
            if(a<c) {
                x=b;
                y=a;
                z=c; }
            else {
                x=b;
                y=c;
                z=a; } }
        else {
            x=c;
            y=b;
            z=a; } }
    printf("%d %d %d",x,y,z);
return 0; }