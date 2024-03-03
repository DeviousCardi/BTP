#include <stdio.h>
#include <stdlib.h>
int count=0;int c[][2];
void maxsold(int *a,int *b,int n,int m,int x,int y) {
    int i,j,t=0;int k=0;
    for(i=0;i<n;i++) {
        for(j=t;j<m;j++) {
            if(a[i]>=b[j]-x && a[i]<=b[j]+y) {
                count++;
                c[k][0]=i;c[k][1]=j;
                k++;t++;
                break; } } } }
int main() {
	int n,m,x,y,i;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	int reqvst[n];
	int avlvst[m];
	for(i=0;i<n;i++) {
	    scanf("%d ",&reqvst[i]); }
	if(i==n)
	scanf("'\n'");
	for(i=0;i<m;i++) {
	    scanf("%d ",&avlvst[i]); }
	maxsold(reqvst,avlvst,n,m,x,y);
	printf("%d\n",count);
	for(i=0;i<=count-1;i++) {
	    printf("%d %d\n",c[i][0],c[i][1]); }
	return 0; }