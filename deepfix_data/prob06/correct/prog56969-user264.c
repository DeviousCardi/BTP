#include <stdio.h>
#include <stdlib.h>
int countno(int *a,int *b,int n,int m,int x,int y){
    int i,j,t=0,k=0;
    for(i=1;i<=n;i++){
     for(j=t;j<=m;j++){
	    if(b[j]>=a[i]-x&&b[j]<=a[i]+y){
	        k++;
	        t=j+1; break; } } }
	return k; }
int main() {
	int n,m,x,y,a[100],b[100],i=1,j=1,k=0,t=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	scanf("%d",&b[i]);
	printf("%d\n",countno(a,b,n,m,x,y));
	for(i=1;i<=n;i++){
    for(j=t;j<=m;j++){
	    if(b[j]>=a[i]-x&&b[j]<=a[i]+y){
	        k++;
	        printf("%d %d\n",i,j); t=j+1; break; } } }
	return 0; }