#include <stdio.h>
#include <stdlib.h>
int max(int c[],int a[],int s)
{int i,k;
m=c[0];
    for(i=0;i<s;i++) {
        if(c[i]>=m)
       { k=i;
         m=c[i]; } }
    return a[k]; }
int main() {
  int n,i,j;
  int a[10000];
  scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
int count[10000];
for(i=0;i<n;i++) {
    count[i]=0; }
for(i=0;i<n;i++) {
   for(j=0;j<n;j++) {
       if(a[i]==a[j]) {
        count[i]++; } } }
for(i=0;i<n;i++) {
 printf("%d\n",count[i]); }
int mode=max(count,a,n);
printf("%d",mode);
	return 0; }