#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,sum,j,m=0,k;
	scanf("%d",&N);
int a[N];
for(i=0;i<N;i++)
scanf("%d",&a[i]);
scanf("%d",&sum);
for(i=0;i<n;i++) {
    k=sum-a[i];
for(j=i+1;j<n;j++) {
 if(k==a[j])
 { printf("(%d,%d\n)",a[i],a[j]);
  m++; } } }
if(!(m))
printf("no\noutput");
	return 0; }