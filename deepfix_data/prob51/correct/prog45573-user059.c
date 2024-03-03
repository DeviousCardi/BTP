#include <stdio.h>
int main() {
    int n,k,i,j,a[100000];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp; } } }
    printf("%d",a[n-k]);
    return 0; }