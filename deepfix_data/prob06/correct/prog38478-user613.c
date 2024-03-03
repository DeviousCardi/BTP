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
    fun(0,0);
    return 0; }
int fun(int k,int p){
    int i,j;
    if(k==m+1){
        return 0; }
    for(i=p;i<n;i++){
        if(a[i]-x<=b[k]&&a[i]+y>=b[k])
        printf("%d %d",a[i],k+1);
        break; }
    fun(k+1,i+1);
    return 0; }