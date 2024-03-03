#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,a;
    scanf("%d%d",&m,&n);
    int max,arr[m];
    for(i=0;i<m;i++)
     { max=INT_MIN;
       for(j=0;j<n;j++)
         {scanf("%d",&a);
           if(a>max) {
                max=a; }
         } arr[i]=max; }
     for(i=0;i<m-1;i++)
     {  if(arr[i]<arr[i+1])
           arr[i+1]=arr[i]; }
     printf("%d",arr[i]);
    return 0; }