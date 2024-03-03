#include<stdio.h>
int main() {
    int x,y,z,i;
    scanf("%d",&x);
    y=rec(x);
    return 0; }
int rec(int t) {
    int a,b;
    scanf("%d",&a);
    if(t==0)
    return 1;
    else
    b=a*rec(t-1);
    return b; }