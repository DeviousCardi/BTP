#include <stdio.h>
int main() {
    int n,i,t,m;
    t=n;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++) {
        t=t%i;
        if(t==0)
        continue; }
    if(m==t-2)
    printf("YES");
    else
    printf("NO");
    return 0; }