#include <stdio.h>
int main() {
    int i,j,n,k,temp;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[i]>=a[j]) {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp; } } }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; }