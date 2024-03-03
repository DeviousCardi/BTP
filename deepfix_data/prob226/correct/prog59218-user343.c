#include <stdio.h>
int i,d;
int a[30],b[20];
int sum(int s) {
   int su=0;
  for (i=s-1;i>=(s-d);i--)
      su=su+a[i];
    return su; }
int main() {
	int n,j;
	scanf("%d%d",&d,&n);
	for (i=0;i<d;i++)
	  scanf("%d",&b[i]);
	for (i=0;i<d;i++){
	  a[i]=b[i];
	  printf("%d\n",a[i]); }
	for (i=d;i<=n;i++) {
	    for (j=i-1;j>=i-d;j--) {
	        a[i]=a[i]+a[j]; } }
	  printf("%d",a[n]);
	return 0; }