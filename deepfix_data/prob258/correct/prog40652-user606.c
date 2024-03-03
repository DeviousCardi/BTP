#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,count=0;
	scanf("%d",&n);
	int  a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[n]);}
		if (n==1) printf ("Yes");
		else for (i=0;i<n;i++){
		if (i==0){
		    if (a[0]>a[1]) count++;}
		else if (i==(n-1))
		if (a[n-1]>a[n-2]) count++;
		else if(a[i]>a[i-1] && a[i]>a[i+1])count ++;}
	return 0; }