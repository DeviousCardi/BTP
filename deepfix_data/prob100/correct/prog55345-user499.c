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
         } arr[i+1]=max; }
     arr[0]=INT_MAX;
     for(i=0;i<m;i++)
     {  if(arr[0]>arr[i+1])
           arr[0]=arr[i+1]; }
     printf("%d",arr[0]);
    return 0; }