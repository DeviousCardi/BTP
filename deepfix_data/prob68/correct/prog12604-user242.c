#include<stdio.h>
long int n;
int t=0;
int prod(int m){
    int i;
    t++;
    if(t<=n){
        scanf("%d ",&i);
        return (i*prod(m)); }
    return prod(m); }
int main() {
    int p,x;
    scanf("%ld\n",&n);
    scanf("%d ",&x);
    p=prod(x);
    printf("\n%d",p); }