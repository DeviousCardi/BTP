#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int i,j,c=0,sum=0;
    for(i=l;i<r;i++)
    {c=0;
        for(j=i+1;j<r;j++) {
           if( arr[j]<arr[i])
            c++; }
        sum+=c; }
    return sum; }
int main() {
    int i,n,k;int m=0,max=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
     for(i=0;i<n;i++) {
         m=getInversions(i,k+i);
         if(m>max)
         max=m; }
     printf("%d",max);
    return 0; }