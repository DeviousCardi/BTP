#include <stdio.h>
int main() {
    int t=10000000;
    printf("%d",t);
    int n,i,s=1;
    scanf("%d",&n);
    for(i=2;i*i<n;i++) {
        if(n%i==0)
        s=s+i+n/i; }
    if(s==n)
    printf("YES");
    else
    printf("NO");
    return 0; }