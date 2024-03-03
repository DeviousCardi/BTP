#include<stdio.h>
#include<strings.h>
 void rev(int ar[],int n)
 {  if(n==0)return ar[n-1];
     for(i=0;i<n;i++)
       printf("%d",rev(ar,n-i)); }
int main() {
    int n,i,p,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
      scanf("%d",&ar[i]);
      for(k=0;k<n+1;k++)
       rev(ar,n);
     for(p=0;p<n;p++)
      printf("%d ",ar[p]);
    return 0; }