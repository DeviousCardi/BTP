#include <stdio.h>
int main() {
    int n,a[1001],p,j,i,c=1,b[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    b[0]=i;
    while(i<=n) {
        i=a[i]-1;
        b[c]=i;
        c++;
        for(j=0;j<=c;j++) {
            for(p=j+1;p<=c;p++) {
                if(a[p]==a[j]) {
                    printf("%d ",p);
                    printf("%d ",p-j);
                    return 0; } } } }
    return 0; }