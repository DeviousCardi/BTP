#include <stdio.h>
int main() {
    int arr[100000],i,j,n,k,min,temp;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++) {
       min=i;
       for(j=i+1;j<n;j++) {
           if(arr[j]<arr[min])
                min=j; }
       temp=arr[min];
       arr[min]=arr[i];
       arr[i]=temp; }
   printf("%d",arr[n-k]);
    return 0; }