#include <stdio.h>
#include <stdlib.h>
void check(int* des,int* a,int x,int y,int n,int m) {
    int i,j;
    int mat[n][2];
    int k=0;
    int count=0;
    for(i=0;i<n;i++) {
        for(j=i;j<m;j++) {
            if((des[i]>=a[j]-x)&&(des[i]<=a[j]+y)) {
                count=count+1;
                mat[k][0]=i;
                mat[k][1]=j } } }
    printf("%d",count); }
int main() {
	int n,m,x,y;
	int i;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&x);
	scanf("%d",&y);
	int des[n];
	int a[m];
	for(i=0;i<n;i++) {
	    scanf("%d",&des[i]); }
	for(i=0;i<m;i++) {
	    scanf("%d",&a[i]); }
	check(des,a,x,y,n,m);
	return 0; }