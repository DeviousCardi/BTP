#include <stdio.h>
#include <stdlib.h>
int main() {
     int n,i,j,b,count=0;
     scanf("%d\n",&n);
     int a[n],c[n];
     for(i=0;i<n;i++) {
         scanf("%d",&a[i]); }
     for(i=0;i<n;i++) {
         for(j=0;j<n-1;j++) {
         if(a[i]==a[j+i+1])
           c[i]=count+1;
          b=a[i]; }
          count=count+1; }
	    printf("%d",count);
	return 0; }