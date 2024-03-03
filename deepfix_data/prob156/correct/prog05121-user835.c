#include<stdio.h>
int main() {
    int m,n,i,j,heap,k,temp,h;
    int sum,a[100];
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++) {
        sum=0;
        for(j=1;j<=n;j++) {
            scanf("%d",&heap);
            sum=sum+heap; }
        a[i-1]=sum; }
    for(k=1;k<=m;k++) {
        for(h=1;h<=m;h++) {
            if(a[k-1]>a[j-1]) {
                temp=a[k-1];
                a[k-1]=a[j-1];
                a[j-1]=temp; }
            else {
                continue; } }
        printf("%d\n",a[k-1]); }
    return 0; }