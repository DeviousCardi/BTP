#include <stdio.h>
int main() {
    int n,m,i,j,s,a,max;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++)
        scanf("%d",&a); }
    for(i=0;i<n;i++)
    {   s=0;
        for(j=0;j<m;j++) {
            s=s+a; } }
    arr[i]=s;
    max=arr[0];
    for(i=1;i<n;i++) {
        if(max<arr[i])
        arr[i]=max; }
    printf("%d",max);
    return 0; }