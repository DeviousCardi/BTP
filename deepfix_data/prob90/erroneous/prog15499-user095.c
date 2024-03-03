#include <stdio.h>
int main() {
    int i,n,ln,c1=0,c2=0;
    scanf("%d",&ln);
    scanf("%d",&n);
    int num[n],occ[498];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    for(i=1;i<499;i++) {
        for(j=0;j<n;j++) {
            if(a[j]==i)
            d1++; }
        occ[i-1]=d1; }
    for(i=1;i<=ln;i++) {
        if(occ[i-1]>=0 && occ[ln-1-1]>=0)
        d2++; }
    if(d2==0)
    printf("unlucky");
    else
    printf("lucky");
    return 0; }