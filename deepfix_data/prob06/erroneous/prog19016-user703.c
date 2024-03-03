#include <stdio.h>
#include <stdlib.h>
int matchjacket(int *sol,int *jac){
    if(*sol>=*jac-x&&*sol<=*jac+y)
        return 1;
    else return 0; }
int main() {
	int n,m,x,y,i,sol[50],jac[50],k=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(i=0;i<n;i++){
	    scanf("%d",&sol[i]); }
	for(i=0;i<m;i++){
	    scanf("%d",&jac[i]); }
	return 0; }