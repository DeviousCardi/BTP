#include <stdio.h>
#include <stdlib.h>
int main() {
int i,t,m,n;
scanf("%d",&n);
int a[n];
if(n<20){
for(i=0;i<=n;i++) {
    scanf("%d",&a[i]); }
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&m);
    if(m==0){
        if(a[m]>a[m+1])
        printf("Yes\n");
        else
        printf("No\n"); }
  else  if (m==(i-1)){
        if(a[m-1]<a[m])
        printf("Yes\n");
        else
        printf("No\n"); }
else if(a[m]>a[m+1]&&a[m]>a[m-1])
printf("Yes\n");
else
printf("No\n"); } }
	return 0; }