#include <stdio.h>
int main(){
    int n,a[1000],b[1000],j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    b[0]=1;
    b[1]=a[1];
    for(int i=1;i<n;i++)
    b[i+1]=a[b[i]-1];
    return 0; }