#include <stdio.h>
#include <stdlib.h>
int fun();
int n,m,x,y,z=0;
int a[10000],b[20];
int ar[100000];
int main(){
	scanf("%d\n%d\n%d\n%d\n",&n,&m,&x,&y);
	int i,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<m;j++)
	scanf("%d",&b[j]);
    fun(0,0);
    for(i=0;i<20;i++)
    ar[i]=0;
    return 0; }
int fun(int k,int p){
    int i;
    if(k==m) {
        printf("%d\n",z);
        for(i=0;i<100000;i++) {
            if(ar[i]!=0)
            printf("%d %d\n",ar[i],i+1); }
        return 0; }
    for(i=p;i<n;i++) {
        if(a[i]-x<=b[k]&&a[i]+y>=b[k]) {
            ar[k]=i+1;
            z++;
            break; } }
    return fun(k+1,i+1); }