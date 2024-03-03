#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,e=0,b,c,d=0;
    scanf("%d",&x);
    for(int i=1;i<x;i++){
        if((x-i)%3==0){
            b=(x-i)/3;
            break; } }
    printf("%d ",b);
    for(int i=1;i<x;i++){
        if((x-i)%5==0){
            c=(x-i)/5;
            break; } }
    printf("%d ",c);
    for(int i=1;i<x-1;i++){
        d=d+((x-3*i)%5==0); }
    printf("%d ",d);
    for(int i=1;;i++){
        for(int j=1;;j++){
            int k;
            for(k=0;;k++){
                e=e+1+2*k;
                break; }
            break; }
        if((x-3*i-5*j)<=0){
                    break; } }
    printf("%d ",e);
    y=e+d+c+b+1+(x%3==0)+(x%5==0);
    printf("%d",y);
    return 0; }