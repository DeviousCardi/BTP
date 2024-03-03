#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];int i,c=0,j,k;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<99;i++)
    {c=0;
        for(j=0;j<n;j++) {
            if (a[j]==i)
            c++; }
        for(k=1;k<=c;k++)
        printf("%d ",i); }
    printf("end");
    return 0; }