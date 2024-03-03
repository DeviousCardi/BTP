#include <stdio.h>
#include <stdlib.h>
void input(int *mat,int s);
void equip(int *sol,int n,int *vest)
int main() {
	int n,m,x,y,*sol,*vest;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	sol=(int*)malloc(sizeof(int)*n);
	vest=(int*)malloc(sizeof(int)*m);
	input(sol,n);
	input(vest,m);
	equip(sol,n,vest,m);
	free(sol);
	free(vest);
	return 0; }
void input(int *mat,int s) {
    int i;
    for(i=0;i<s;i++)
        scanf("%d",mat+i); }