#include <stdio.h>
#include <stdlib.h>
int fun();
int n,m,x,y;
int a[20],b[20];
int ar[20];
int c[50];
int main() {
	scanf("%d\n%d\n%d\n%d\n",&n,&m,&x,&y);
	int i,j,k;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<m;j++)
	scanf("%d",&b[j]);
	for(k=0;k<20;k++)
	ar[k]=-1;
	fun(0 );
	return 0; }
int fun(int k ) {
    int i,j,r=0;
    if(k==m){
        for(i=0;i<m;i++)
        printf("%d",(c[i])); }
    for(i=0;i<n;i++) {
        if(a[i]-x<=b[k]&&b[k]<=a[i]+y)
        {for(j=0;j<k;j++){
            if(a[i]==c[j])
            r=1;
            break; }
        if(r!=1){
            c[k]=a[i];
            fun(k+1 ); } } }
    return 0; }