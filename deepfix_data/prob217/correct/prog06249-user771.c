#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    long int s,a[n];
      for(i=0;i<n;i++) {
        scanf("%ld",&a[i]); }
    scanf("%ld",&s);
    for(i=0;i<n;i++) {
      for(j=i;j<n;j++) {
       if(a[j]==s-a[i])
       printf("(%d,%d)",a[i],a[j]); } }
	return 0; }