#include <stdio.h>
#include <stdlib.h>
int main() {
 int m,n,i,k,j;
 scanf("%d",&m);
 n=m;
 for(i=1;i<=m;i++){
     for(j=1;j<n;j++){
         printf(" "); }
 for(k=1;k<=i-1;k++) {
     printf("%d",(m-i+k)%10); }
 printf("%d",m);
 for(k=1;k<i;k++) {
     printf("%d",(m+k)%10); }
 printf("\n");
 n--; }
  for(i=1;i<=m;i++){
     for(j=1;j<n;j--){
         printf(" "); }
 for(k=1;k<=i-1;k++) {
     printf("%d",(m-i+k)%10); }
 printf("%d",m);
 for(k=1;k<i;k++) {
     printf("%d",(m+k)%10); }
 printf("\n");
	return 0; }