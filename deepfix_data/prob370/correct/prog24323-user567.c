#include<stdio.h>
int main() {
    int a,b,c,f=0,g=0;
    scanf("%d%d%d",&a,&b,&c);
     if(((a-b)*(a-c))<=0) {
        f=b;
        b=a;
        a=f;
    }else
    if(((c-b)*(c-a))<=0) {
       f=b;
       b=c;
       c=f; }
    if(a>c) {
        g=a;
        a=c;
        c=g; }
   if((a+b)>c) {
       if((a*a+b*b-c*c)==0) {
           printf("RIGHT");
       }else{
       if((a*a+b*b-c*c)<0) {
           printf("OBTUSE");
       }else{printf("ACUTE");} }
   }else{printf("INVALID");}
    return 0; }