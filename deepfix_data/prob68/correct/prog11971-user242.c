#include<stdio.h>
long int n;
int prod(int m){
    int i;
        scanf("%d ",&i);
        return (i*prod(m)); }
int main() {
    int p,x;
    scanf("%ld\n",&n);
    scanf("%d ",&x);
    p=prod(x);
    printf("\n%d",p); }