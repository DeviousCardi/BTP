#include<stdio.h>
int main() {
    int i,j,n,a[20],max=1,s=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
       for(j=i;j<(n-1);j++) {
           if(a[i+1]>a[i])
           s=s+1; }
       if(max<s)
       max=s;
       s=1; }
    printf("%d",max);
    return 0; }