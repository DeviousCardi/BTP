#include <stdio.h>
#include <stdlib.h>
int fun();
int n,m,x,y;
int a[20],b[20];
int main() {
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int i,j,k;
	int ar[20];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++){
	scanf("%d",&b[j]); }
	for(k=0;k<20;k++)
	ar[k]=-1;
	fun(0,ar);
	return 0; }
int fun(int k,int c[20]) {
    int i,j;
    if(k==m){
        printf("%d\n",(c[0])); }
    for(i=0;i<n;i++) {
        if(a[i]>=b[k]-x&&b[k]+y>=a[i])
        {for(j=0;j<k;j++){
            if(a[i]==c[j])
            return 0; }
            c[k]=a[i];
            fun(k+1,c); } }
    return 0; }