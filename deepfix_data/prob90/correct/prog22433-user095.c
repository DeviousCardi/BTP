#include <stdio.h>
int main() {
    int i,j,n,ln,c1=0,c2=0;
    scanf("%d",&ln);
    scanf("%d",&n);
    int num[n],occ[999];
    for(i=0;i<n;i++) {
        scanf("%d",&num[i]); }
    for(i=1;i<1000;i++) {
        c1=0;
        for(j=0;j<n;j++) {
            if(num[j]==i)
            c1++; }
        occ[i-1]=c1; }
    for(i=1;i<=ln/2;i++) {
        if(occ[i-1]>0 && occ[ln-i-1]>0)
        c2++; }
    if(c2==0)
    printf("unlucky");
    else
    printf("lucky");
    return 0; }