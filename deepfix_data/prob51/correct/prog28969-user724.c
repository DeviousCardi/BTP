#include <stdio.h>
int main() {
    int i,j,k,n,a[100000],temp;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            if(a[j+1]>a[j]) {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp; } } }
    printf("%d",a[k-1]);
    return 0; }