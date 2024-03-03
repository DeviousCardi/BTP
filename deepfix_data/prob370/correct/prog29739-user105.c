#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",a,b,c);
    if(a*a+b*b==c*c){
        printf("right"); }
    else if((a*a)+(b*b)>(c*c)){
        printf("acute"); }
    else if(a+b<c){
        printf("invalid"); }
    else if(a+c<b){
        printf("invalid"); }
    else if(b+c<a){
        printf("invalid"); }
    else{
        printf("obtuse"); }
    return 0; }