#include <stdio.h>
int main(){
    int n,a[100],i,t1=0,t2,f[100]={0};
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        if(a[i]==j)
        f[i]++; }
    for(i=0;i<n;i++)
    if(f[i]!=0)
    t1++;
    t2=t1-1;
    printf("%d %d",t1,t2);
    return 0; }