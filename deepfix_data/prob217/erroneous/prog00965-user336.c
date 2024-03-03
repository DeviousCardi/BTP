#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[10000];
    int i,s,j,n;
    scanf("%d",&n);
    scanf("%d",&s);
   for(i=0;i<n;i++) {
         scanf("%d"&,arr[i]); }
    for(i=0;i<n;i++) {
       for(j=1;j<n;j++) {
       if(s==arr[i]+arr[j]);
       pintf("(%d,%d)\n",arr[i],arr[j]);
       continue; } }
	return 0; }