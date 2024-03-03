#include<stdio.h>
int main() {
    int n,i,count=1,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    max=a[0];
    for(i=0;i<n-1;i++){
        if(max<a[i]){
            max=a[i];
            count++; } }
    printf("%d",count);
    return 0; }