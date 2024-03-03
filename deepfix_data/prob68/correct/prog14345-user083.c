#include<stdio.h>
int pro(int n){
    static int m=1;
    long int b;
    scanf("%ld",&b);
    if(b==0){
    return b+1;
    m=m+1;}
    else{
        m=m+1;
        b=b*pro(b);
        return b; } }
int main() {
   int a;
   scanf("%d\n",&a);
   printf("%ld",pro(a));
    return 0; }