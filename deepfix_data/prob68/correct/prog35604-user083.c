#include<stdio.h>
int pro(int n){
    static int m=1;
    int b;
    long int c;
    scanf("%d",&b);
    if(b==0){
    return b+1;
    m=m+1;}
    else{
        m=m+1;
        c=b*pro(b);
        return c; } }
int main() {
   int a;
   scanf("%d\n",&a);
   printf("%ld",pro(a));
    return 0; }