#include<stdio.h>
int main(){
    int a,b,c,max,s1,s2,det;
    scanf("%d%d%d",a,b,c);
    if(a>=b){
        if(a>=c){
            max=a;
            s1=b;
            s2=c; }
        else{
            max=c;
            s1=a;
            s2=b; } }
    else{
      if(b>=c){
            max=b;
            s1=a;
            s2=c; }
        else{
            max=c;
            s1=a;
            s2=b; } }
    det=max*max - s1*s1 - s2*s2;
    if (s1+s2<=max){
        printf("INVALID"); }
    else if(det<0){
        printf("ACUTE"); }
    else if(det>0){
        printf("OBTUSE"); }
    else if(det=0){
        printf("RIGHT"); }
    return 0; }