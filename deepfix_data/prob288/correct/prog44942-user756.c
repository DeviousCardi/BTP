#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int mod(int a){
        if(a<0){
            a=-a; }
        else{
            a=a; }
        return a; }
    int i,l,h;
    scanf("%d",&h);
    for(i=1;i<=2*h+1;i++){
        for(l=1;l<=h+1;l++){
            if(l<=mod((h+1)-i)){
                printf(" "); }
            if(!(l<=mod((h+1)-i))){
                if(mod(l-i)%2==0){
                printf("*"); }
                if(mod(i+l)%2==1){
                    printf("x"); } } }
        printf("\n"); }
    return 0; }