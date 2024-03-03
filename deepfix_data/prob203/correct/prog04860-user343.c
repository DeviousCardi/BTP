#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[50];
	int i,j,count=0;
	for (i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for (i=0;i<n;i++) {
	    for (j=0;j<n;j++) {
	      if (i!=j && a[i]==a[j])
	        count=count+1; } }
	if (count==0)
	  printf("NO\n");
	else
	  printf("YES\n");
	return 0; }