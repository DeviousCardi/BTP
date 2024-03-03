#include <stdio.h>
int main() {
    int n,k,a[1000000];
    int i,j;
    int temp=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]<a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    printf("%d",a[k]);
    return 0; }