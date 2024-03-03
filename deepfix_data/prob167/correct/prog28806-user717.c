#include<stdio.h>
int n;
long s;
void sum(int n) {
    int a=0;
    if(n>0) {
    scanf("%d",&a);
    s+=a;
    sum(n-1); }
    if(n<=0)
    return; }
int main() {
scanf("%d\n",&n);
sum(n);
printf("%d",s);
    return 0; }