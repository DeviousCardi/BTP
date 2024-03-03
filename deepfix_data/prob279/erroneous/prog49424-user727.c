#include <stdio.h>
int main() {
    int n,a[100000],i,j,countApp,repeat,miss;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++) {
        count=0;
        for(j=0;j<n;j++) {
            if(a[j]==i)
            countApp++; }
        if(countApp==2)
        repeat=i;
        else if(countApp==0)
        miss=i; }
    printf("%d\n%d",repeat,miss);
    return 0; }