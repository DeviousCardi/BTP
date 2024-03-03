#include<stdio.h>
#include<strings.h>
 int rev(int ar[],int n)
 {  int k;
     if(n==0)return ar[n-1];
   return rev(ar,n-1); }
int main() {
    int n,i,p,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
      scanf("%d",&ar[i]);
     k=rev(ar,n);
printf("%d",k);
    return 0; }