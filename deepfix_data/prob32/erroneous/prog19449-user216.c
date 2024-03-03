#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
int y=1;
scanf("%d",&n);
int a[n];
for(i=0;i<=n-1;i++){
    scanf("%d",&a[i]); }
for(i=0;i<=n-1;i++){
    if(i==0&&a[i]<a[i+1]){
        printf("Yes"); }
    if(i==n-1&&a[i]<a[i-1]){
        printf("Yes"); }
    else(a[i]<a[i-1]&&a[i]<a[i+1]){
        printf("Yes");y=0;
        break;} }
  if(y==1){
      printf("No"); }
	return 0; }