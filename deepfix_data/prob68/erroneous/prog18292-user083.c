#include<stdio.h>
int n;
int pro(int d){
    static int m=1
    int b,c=1,d;
    scanf("%d",&b);
    if(m==n)
    return b;
    else{
        m=m+1;
        c=d*pro(b) } }
int main() {
   int a;
   scanf("%d\n",&n);
   scanf("%d",&a);
   printf("%d",pro(a));
    return 0; }