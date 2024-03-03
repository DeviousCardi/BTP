#include <stdio.h>
int main() {
    int n,d,temp=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
       scanf("%d",&a[i]);
    scanf("%d",&d);
    for(int i=0;i<d;++i) {
        temp=a[n-1];
        for(int j=n-1;j>0;j--)
           a[j]=a[j-1];
        a[0]=temp; }
    for(int i=0;i<n;++i)
       printf("%d ",a[i]);
    return 0; }