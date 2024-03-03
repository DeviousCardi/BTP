#include <stdio.h>
#include <stdlib.h>
int main() {
     int n,i,j,count=0;
     scanf("%d\n",&n);
     int a[n];
     for(i=0;i<n;i++) {
         scanf("%d",&a[i]); }
     for(i=0;i<n;i++) {
         for(j=0;j<n-1;j++) {
         if(a[i]==a[j]&&(i!=j))
           count=count+1; }
          count=count+1; }
	    printf("%d",count);
	return 0; }