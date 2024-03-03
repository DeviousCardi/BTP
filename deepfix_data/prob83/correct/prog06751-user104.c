#include <stdio.h>
int main()
{int n,d,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]); }
 scanf("%d",&d);
 for(i=0;i<d;i++){
     printf("%d ",arr[i+d]); }
 for(i=d;i<n;i++){
     printf("%d ",arr[i]); }
    return 0; }