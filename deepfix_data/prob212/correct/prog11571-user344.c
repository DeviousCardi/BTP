#include <stdio.h>
int main(){
    int n, l, m;
    scanf("%d", &n);
    m=0;
    while(n>10){
        n=n%10;
        n=n/10;
        m=n+m; }
    l=2016;
    while(l%m!=0){
        l=l+1; }
    printf("%d", l);
    return 0; }