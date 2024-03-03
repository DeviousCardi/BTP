#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j;int max_r=0,min=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<m;i++)
    {  scanf("%d",&a[0]);
    min=a[0];max_r=a[0];
         for(j=1;j<n;j++) {
             scanf("%d",&a[j]);
           if(a[j]>max_r)
            max_r=a[j]; }
        if(min<max_r)
        min=max_r; }
    printf("%d",min);
    return 0; }