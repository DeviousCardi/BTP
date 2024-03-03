#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int a[20];
	for(i=0;i<n;i++) {
     scanf("%d\n",&a[i]);
	  if(((a[1]>a[0])&&(a[1]>a[2]))||((a[i]>a[i-1])&&(a[i]>a[i+1]))||(a[n-1]>a[n-2])) {
          printf("Yes\n");
           return 0; } }
       printf("No");
                                                                                         	return 0; }