#include <stdio.h>
int main(){
    int n,S=0;
    int f;
    scanf("%d",&n);
    while(n!=0)
    { f=n%10;
    S=S+f;
    n=n/10; }
    int i=2016;
    while(i%S!=0) {
    i++; }
    printf("%d",i);
 return 0; }