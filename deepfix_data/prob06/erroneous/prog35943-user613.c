#include <stdio.h>
#include <stdlib.h>
int n,m,x,y;
int a[20],b[20],c[50];
int main() {
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++){
	scanf("%d",&b[i]); }
	fun(0)
	return 0; }
fun(int k) {
    int i,j;
    for(i=0;i<n;i++) {
        if(b[k]>=a[i]-x&&b[k]<=a[i])
        {for(j=0;j<k;j++){
            if(a+i==c[j])
            return 0; }
            c[i]=(a+i);
            fun(k+1); } } }