#include <stdio.h>
int main(){
    int n,m;
    int p=2016;
    int s=0;
    scanf("%d",&n);
    while(n>0)
        {s=s+(n%10);
        n=n/10; }
    while(p%s!=0)
        {p=p+1; }
    printf("%d",p);
    return 0; }