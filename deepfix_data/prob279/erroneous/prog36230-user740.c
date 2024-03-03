#include <stdio.h>
int main() {
    int n,i,j,k,l,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=1;j<=n;j++) {
        count=0;
        for(i=0;i<n;i++) {
            if (a[i]==j)
            count++; }
        if(count==2)
        k=j;
        else if(count==0)
        l=j;
        else }
    printf("%d\n%d",k,l);
    return 0; }