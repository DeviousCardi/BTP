#include <stdio.h>
#include <stdlib.h>
int main() {
     int n,i,b;
     scanf("%d\n",&n);
     int a[n];
     for(i=0;i<n;i++) {
         scanf("%d",&a[i]); }
      if(n==1) {
          printf("%d",a[0]); }
      else {
     for(i=0;i<n;i++) {
         if(a[i]!=a[i+1]) {
             continue; }
           else if(a[i]==a[i+2]) {
              b=a[i]; }
        else
            b=a[i]; }
	    printf("%d",b); }
	return 0; }