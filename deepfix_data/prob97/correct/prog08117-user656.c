#include <stdio.h>
#include <stdlib.h>
int main() {
	 int n,i,j,k,l;
	 scanf("%d",&n);
	 if(n<10){
	   for(i=0;i<n;i++) {
      for(j=n-i;j>1;j--)
  printf(" ");
      for(k=n-i;k<=n;k++) {
  printf("%d",k); }
    for(l=n+1;l<=n+i;l++){
        printf("%d",l); }
      printf("\n"); } }
	 else {
	    for(i=0;i<n;i++) {
      for(j=n-i;j>1;j--)
  printf(" ");
      for(k=n-i;k<=n;k++) {
  printf("%d",k); }
    for(l=n+1;l<=n+i;l++){
        printf("%d",l); }
      printf("\n"); } }
	return 0; }