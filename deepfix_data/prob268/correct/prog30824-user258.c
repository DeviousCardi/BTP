#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,e=0,b,c,d=0;
    scanf("%d",&x);
    for(int i=1;i<x;i++){
        if((x-i)%3==0){
            b=(x-i)/3;
            break; } }
    for(int i=1;i<x;i++){
        if((x-i)%5==0){
            c=(x-i)/5;
            break; } }
    for(int i=1;i<x-1;i++){
        d=d+((x-3*i)%5==0); }
    for(int i=1;i<x-4;i++){
        for(int j=1;j<x-4;j++){
            for(int k=0;k<x-4;k++){
            if((x-3*i-5*j)<0){
                break; }
            e=e+1+2*k; } } }
    y=e+d+c+b+1+(x%3==0)+(x%5==0);
    printf("%d",y);
    return 0; }