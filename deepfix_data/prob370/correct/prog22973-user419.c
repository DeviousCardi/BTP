#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c*c==a*a+b*b){
        printf("right angle triangle"); }
    else{
        if(a*a+b*b<c*c){
            printf("obtuse triangle"); }
        else{
        printf("acute triangle"); } }
    return 0; }