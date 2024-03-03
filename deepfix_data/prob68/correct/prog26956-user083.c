#include<stdio.h>
int pro(int n){
    static int m=1;
    int b;
    scanf("%d",&b);
    if(m==n){
    return b;
    m=m+1;}
    else{
        m=m+1;
        b=b*pro(b);
        return b; } }
int main() {
   int a;
   scanf("%d\n",&a);
   printf("%d",pro(a));
    return 0; }