#include<stdio.h>
int lis(int a[],int n) {
    int i,j,Lis[20],k=0;
    for(i=0;i<n;i++)
    Lis[i]=1;
    for ( i = 1; i < n; i++ )
      for ( j = 0; j < i; j++ )
         if ( a[i] > a[j] && Lis[i] < Lis[j] + 1)
            Lis[i] = Lis[j] + 1;
    for ( i = 0; i < n; i++ )
      if ( k < Lis[i] )
         k = Lis[i];
    printf("%d ",k);
    return k; }
int main() {
    int a[20],n,i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        if(lis(a,i)>j)
        j=lis(a,i); }
    printf("%d",j);
    return 0; }