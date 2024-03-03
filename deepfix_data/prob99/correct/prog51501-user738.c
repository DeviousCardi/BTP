#include<stdio.h>
int main() {
    int n,j,count;
    scanf("%d",&n);
    int a[n+1],i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        count=0;
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i]){
                count++; } }
                    printf("%d ",count); }
    return 0; }