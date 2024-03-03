#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,t,a;
int s[25];
scanf("%d",&n);
for(i=1;i<n;i++); {
     scanf("%d",&s[i]); }
 scanf("%d",&t);
 for(i=0;i<t;i++){
   scanf("%d\n",&a);
  if(n==1) {
      printf("Yes\n"); }
  else if(a==0) {
      if(s[1]<s[0]) {
          printf("Yes\n"); }
      else {
          printf("No\n"); } }
 else if(a==(n-1)){
     if(s[a]<s[n-2]) {
         printf("Yes\n"); }
     else{
         printf("No\n"); } }
    else if(s[i]<s[i-1]&&s[i]<s[i+1]) {
     printf("Yes\n"); }
    else{
    printf("No\n"); } }
	return 0; }