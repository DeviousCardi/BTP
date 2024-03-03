#include <stdio.h>
int main() {
	int n;
	int a[50];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int i,j;
	int count=0;
	for(i=0;i<n;i++) {
	    for(j=i;j<n;j++) {
	        if(a[i]==a[j])
	        {printf("YES");
	        count=1;} } }
	if(count!=0)
	printf("NO");
	return 0; }