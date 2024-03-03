#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,arr[20],i,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++)
    {   if(i==0) {
           if(arr[i]>arr[i+1])
           found++;
           break; }
       if(i==n) {
           if(arr[i]>arr[i-1])
           found++;
           break; }
      else if((arr[i]>arr[i+1])&&(arr[i]>arr[i-1]))
       { found++;
         break; } }
    if(found)
        printf("Yes");
    else
       printf("No");
	return 0; }