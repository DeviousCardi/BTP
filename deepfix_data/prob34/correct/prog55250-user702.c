#include <stdio.h>
#include <stdlib.h>
int main() {
int i,t,m,n;
int a[n];
scanf("%d",&n);
if(n<20){
for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
scanf("%d",&t);
for(i=0;i<t;i++) {
    scanf("%d",&m);
if(a[m]>a[m+1]&&a[m]>a[m-1])
printf("Yes");
else
printf("No");
   printf("\n"); } }
	return 0; }