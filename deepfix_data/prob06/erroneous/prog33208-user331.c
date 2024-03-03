#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m;
	long long int x,y;
	int *a,*b;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%lld",&x);
	scanf("%lld",&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	int i,j;
	for(i=1;i<=n;i=i+1){
	    scanf("%d",&*(a+i)); }
	for(i=1;i<=m;i=i+1){
	    scanf("%d",&*(b+i)); }
	i=1;
	j=1;
	while(i<=n&&j<=m)
	        if(a[i]-x<=b[j]&&b[j]<=a[i]+y){
	            i++;
	            j++; }
	        else{
	            j++; } }
	printf("%d",j-1);
	return 0; }