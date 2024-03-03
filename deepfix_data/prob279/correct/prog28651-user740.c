#include <stdio.h>
int main() {
    int n,i,j,k,l,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<=n;j++) {
        count=0;
        for(i=0;i<n;i++) {
            if (a[i]==j)
            count++; }
        if(count==2)
        j=k;
        else if(count==0)
        j=l; }
    printf("%d\n%d",k,l);
    return 0; }