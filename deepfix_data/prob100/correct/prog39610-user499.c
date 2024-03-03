#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,a,k;
    int max,arr[m];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
     { max=0;
       for(j=0;j<n;j++)
         {scanf("%d",&a);
           if(a>max) {
                max=a; }
         } arr[i]=max; }
     arr[0]=INT_MAX;
     for(i=0;i<m;i++)
     {  if(arr[0]>arr[i])
           k=arr[i]; }
     printf("%d",k);
    return 0; }