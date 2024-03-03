#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<=c){
        printf("INVALID"); }
    else if(a+c<=b){
        printf("INVALID"); }
    else if(b+c<=a){
        printf("INVALID"); }
       else if(a*a+b*b==c*c){
        printf("RIGHT"); }
    else if((c>b && c>a && (a*a)+(b*b)>(c*c))||(a*a+c*c>b*b)){
        printf("ACUTE"); }
    else{
        printf("OBTUSE"); }
    return 0; }