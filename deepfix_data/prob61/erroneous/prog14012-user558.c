#include<stdio.h>
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++) {
        for(j=0;j<n;j++) {
            if(i==a[j])
            count[i]++; } }
    for(i=0;i<k;i++)
    printf("%d",count[i]); }