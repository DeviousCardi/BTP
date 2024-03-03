#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,s,a[200];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&s);
	j=0;
	if(a[i]==a[j])
	return 0;
	j++;
	i++;
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++)
	    if((a[i]+a[j]==s)&&(a[i]<a[j]))
	    printf("(%d,%d)\n",a[i],a[j]); }
	return 0; }