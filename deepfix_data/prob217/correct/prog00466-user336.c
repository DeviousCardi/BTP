#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int arr[10000];
    int i,s,j,n;
    scanf("%d",&n);
    scanf("%d",&s);
   for(i=0;i<n;i++) {
         scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
       for(j=1;j<n;j++) {
       if(s==arr[i]+arr[j]);
      { break;}
      printf("(%d,%d)\n",arr[i],arr[j]); } }
	return 0; }