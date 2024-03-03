#include<stdio.h>
int main() {
    int n,i,j,k=0,p=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++)
    {   k=0;
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i]) {
                k++; } }
        b[p]=k+1;
        printf("%d\n",b[p]);
        p++; }
    return 0; }