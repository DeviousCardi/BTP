#include<stdio.h>
int main() {
    int n,j,count,temp,temp1=0;
    scanf("%d",&n);
    int a[n+1],i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n-1;i++) {
        count=0;
        for(j=i+1;j<n;j++) {
            temp=a[i];
            if(a[j]>temp){
                count++; }
            temp=a[j]; }
        if(count>=temp1) {
            temp1=count; }
            printf("%d",count); }
    printf("%d",count);
    return 0; }