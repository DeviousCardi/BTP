#include <stdio.h>
#include <stdlib.h>
int main() {
int i,t,m,n;
scanf("%d\n",&n);
int a[n];
for(i=0;i<n;i++) {
    scanf("%d\n",&a[i]); }
scanf("%d\n",&t);
for(i=0;i<t;i++) {
    scanf("%d\n",&m);
  if (n==1)
  {printf("Yes");}
  else{ if(m==0){
        if(a[m]>a[m+1])
        printf("Yes\n");
        else
        printf("No\n"); }
  else  if (m==(n-1)){
        if(a[m-1]<a[m])
        printf("Yes\n");
        else
        printf("No\n"); }
else {
    if (a[m]>a[m+1]&&a[m]>a[m-1]) {
        printf("Yes\n"); }
else {
printf("No\n"); }
}} }
	return 0; }