#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  scanf("%d\n",&n);
  int i,j,desire;;
  int a[n];
  for(i=0;i<n;i++) {
        scanf("%d\n",&a[n]); }
    scanf("%d",&desire);
    for(i=0;i<n;i++) {
           for(j=i+1;j<n;j++) {
                 if((a[i]+a[j])==desire) {
                     printf("(%d,%d)\n" ,a[i],a[j]); } } }
	return 0; }