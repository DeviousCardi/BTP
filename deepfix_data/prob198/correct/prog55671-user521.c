#include <stdio.h>
#include <stdlib.h>
int main() {
      int n1,i;
      scanf("%d",&n1);
      int a[20],count=0,k,j;
      for(i=0;i<n1;i++) {
          scanf("%d",&a[i]); }
      int n2,s[20];
      scanf("%d",&n2);
      for(i=0;i<n2;i++) {
          scanf("%d",&s[i]); }
      for(i=0;i<n1;i++) {
         for(j=i+1;j<n1;j++) {
             if(a[j]>a[i]) {
                    continue; }
               else {
                   k=a[j];
                   i=j;
                   continue; } } }
      printf("%d",k);
	return 0; }