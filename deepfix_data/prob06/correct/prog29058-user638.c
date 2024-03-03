#include <stdio.h>
#include <stdlib.h>
void input(int *mat,int s);
int main() {
	int n,m,x,y,*a,*b;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*m);
	input(a,n);
	input(b,m);
	return 0; }
void input(int *mat,int s) {
    int i;
    for(i=0;i<s;i++)
        scanf("%d",mat+i); }