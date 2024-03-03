#include <stdio.h>
int main(){
    int n, a, l, m;
    scanf("%d", &n);
    m=0;
    while(n>0){
        a=n%10;
        m=a+m;
        n=n/10; }
    l=2016;
    while(n%m!=0){
        l=l+1; }
    printf("%d",l);
    return 0; }