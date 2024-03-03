#include <stdio.h>
int i,d;
int a[30],b[20];
int sum(int s) {
   int su=0;
  for (i=s-1;i>=(s-d);i--)
      su=su+a[i];
    return su; }
int main() {
	int n;
	scanf("%d%d",&d,&n);
	for (i=0;i<d;i++)
	  scanf("%d",&b[i]);
	for (i=0;i<d;i++)
	  a[i]=b[i];
	if (n<d)
	  printf("%d",a[n]);
	else {
	for (i=d;i<=n;i++)
	  a[i]=sum(i);
	printf("%d",a[n]); }
	return 0; }