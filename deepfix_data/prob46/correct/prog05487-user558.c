#include <stdio.h>
int main() {
    int n,i,t=0,m;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++) {
        if(n%i==0)
        t++; }
    if(m==t-2)
    printf("YES");
    else
    printf("NO");
    return 0; }