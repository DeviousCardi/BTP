#include <stdio.h>
#include <stdlib.h>
int fun();
int n,m,x,y;
int a[20],b[20],c[50];
int main() {
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int i,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++){
	scanf("%d",&b[i]); }
	fun(0);
	return 0; }
int fun(int k) {
    int i,j;
    if(k==m){
        for(i=0;i<m;i++)
        printf("%d",(c[i])); }
    for(i=0;i<n;i++) {
        if(b[k]>=a[i]-x&&b[k]<=a[i]+y)
        {for(j=0;j<k;j++){
            if(a[i]==c[j])
            return 0; }
            c[i]=a[i];
            fun(k+1); } }
    return 0; }