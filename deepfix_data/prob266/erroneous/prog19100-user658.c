#include <stdio.h>
int main(){
    int n,S=0;
    int f;
    scanf("%d",&n);
    while(n!=0)
    { f=n%10;
    S=S+f;
    n=n/10; }
    for(int i=2016; ;i++)
    { if(i%S==0) {
    break; }
    printf("%d",i);
 return 0; }