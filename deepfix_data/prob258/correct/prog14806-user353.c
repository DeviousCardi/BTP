#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int a[20];
	for(i=1;i<n;i++) {
     scanf("%d\n",&a[i]);
	  if((a[i]>a[i-1]&&a[i]>a[i+1])||a[n-1]>a[n-2])
      {  printf("Yes\n"); {
         break; }
        i=i+1; }
      else
        printf("No"); }
	return 0; }