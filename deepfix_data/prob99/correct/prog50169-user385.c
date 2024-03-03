#include<stdio.h>
int main() {
    int n,i,j,k=0,p=0;
    scanf("%d",&n);
    int a[n],b[n-1];
    for(i=0;i<n-1;i++)
    {  k=0;
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i]) {
                k++; } }
        b[p]=k;
        printf("%d\n",k);
        p++; }
    return 0; }