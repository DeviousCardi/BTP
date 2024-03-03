#include <stdio.h>
#include <stdlib.h>
int check(int s[100],int t[100],int p,int q,int e,int f,int k)  {
    int j;
    for(j=0;j<q;j++) {
        if((s[k]>=(t[j]-e)) && (s[k]<=(t[j]+f))) {
            return j+1; } }
    return 0; }
int main() {
	int n,m,x,y,i,j,a[100],b[100],count=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<n-1;i++) {
	    scanf("%d",&a[i]); }
	for(j=0;j<m;j++) {
	    scanf("%d",&b[j]); }
	for(i=0;i<n;i++) {
	    if(check(a,b,n,m,x,y,i)!=0) {
	        count=count+1; } }
	printf("%d\n",count);
	for(i=0;i<n;i++) {
	    if(check(a,b,n,m,x,y,i)!=0) {
	        printf("%d %d\n",i+1,check(a,b,n,m,x,y,i)); } }
	return 0; }