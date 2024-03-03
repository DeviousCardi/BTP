#include <stdio.h>
#include <stdlib.h>
int main() {
	long n,m,x,y,i,j,p=0,q=0;
	scanf("%lf%lf%lf%lf\n",&n,&m,&x,&y);
	long a[100000],b[100000],*u[100000],*v[100000];
	for(i=1;i<=n;i++){
	    scanf("%lf",&a[i]); }
	scanf("\n");
	for(j=1;j<=m;j++){
	    scanf("%lf",&b[j]); }
	for(i=1;i<=n;i++{
	    for(j=q;j<=m;j++){
	        if(a[i]-x<=b[j]<=a[i]+y){
	            p=p+1;
	            u[p]=&a[i];
	            v[p]=&b[j];
	            q=j; } } }
	printf("%lf",p);
	for(i=0;i<=p;i++){
	    printf("%lf %lf",*u[i],*v[i]) }
	return 0; }