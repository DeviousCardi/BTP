#include <stdio.h>
int main() {
    int i,j,n,t=0, exit[100],flag=0,a[100];
    int k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    a[1]=1;
    i=1;
    while(flag!=1) {
        scanf("%d",&exit[i]);
        i=exit[i];
        a[t+2]=exit[i];
        t++;
        for(j=1;j<=t;j++) {
            if(a[j]==exit[i]) {
                flag=1;
                break; } } }
    k=i-j;
    printf("%d %d",t,k);
    return 0; }