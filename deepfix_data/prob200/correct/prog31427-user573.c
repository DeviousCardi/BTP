#include <stdio.h>
int main() {
    int n,k,i,a[100],j,temp;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i]) {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp; } } }
    for(i=n-1;i>k;i--) {
        printf("%d",a[i]); }
    return 0; }