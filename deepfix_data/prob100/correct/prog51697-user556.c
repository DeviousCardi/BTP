#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j;int max_r=0,min=0;
    scanf("%d%d",&n,&m);
    int a[n];min=INT_MAX;max_r=INT_MIN;
    for(i=0;i<m;i++) {
         for(j=0;j<n;j++) {
             scanf("%d",&a[j]);
           if(a[j]>max_r)
            max_r=a[j];
            printf("%d",max_r); }
        if(min>max_r)
        min=max_r; }
    printf("%d",min);
    return 0; }