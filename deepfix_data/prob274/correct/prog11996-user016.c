#include <stdio.h>
int main() {
    int i,n,j,dor[100],t,k,temp[100],l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&dor[i]);
    temp[0]=1;
    for(j=1;j<n;j++) {
        l=dor[j];
        temp[j]=dor[l];
        printf("%d",temp[j]); }
    return 0; }