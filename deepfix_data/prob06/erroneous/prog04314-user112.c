#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*m);
	for(i=0;i<n;i++) {
	    scanf("%d ",&a[i]); }
	for(i=0;i<m;i++) {
	    scanf("%d ",&b[i]); }
	return 0; }
void equip(int a, int b, int c,int d,int *s,int *p) {
    int i,j=0;
    int **t;
    t=(int **)malloc(sizeof(int *)*a);
    for(i=0;i<3;i++)
       t[i]=(int *)malloc(sizeof(int)*2);
    i=0;
    while(i<a) {
        while(j<b) {
            if(p[j]<s[i]-c || p[j]>s[i]+d)
              j++;
           else }
        i++; } }