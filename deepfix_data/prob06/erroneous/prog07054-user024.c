#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,l,u;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&x);
	scanf("%d",&y);
	int a[10000];
	int b[10000];
	int c[10000];
	int d[10000];
	int i,j=0,k=0;
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);printf("%d)%d\n",i+1,a[i])}
	for(i=0;i<m;i++){
	scanf("%d",&b[i]);printf("%d)%d\n",i+1,b[i]);}
	for(i=0;i<n;i++){
	 l=a[i]-x;
	 u=a[i]+y;
	 if((l<=b[j])&&(b[j]<=u)){
	     c[k]=i+1;
	     d[k]=j+1;
	     k++;
	     j++; }
	 else
	 continue; }
	printf("%d\n",k);
	for(i=0;i<k;i++)
	printf("%d %d\n",c[i],d[i]);
	return 0; }