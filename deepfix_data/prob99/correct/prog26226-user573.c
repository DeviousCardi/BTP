#include<stdio.h>
int main() {
    int n,i,j,a[20],count,large,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        large=a[i];
        count=0;
        for(j=i+1;j<n;j++) {
            if(large<a[j])
            count++;
            large=a[j]; }
        if(count>flag)
        flag=count; }
    printf("%d",flag);
    return 0; }