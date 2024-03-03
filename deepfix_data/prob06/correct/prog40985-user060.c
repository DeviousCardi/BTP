#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,success=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int sol[n],vest[m];
	for(i=0;i<n;i++)
	scanf("%d",&sol[i]);
	for(i=0;i<m;i++)
	scanf("%d",vest + i);
	int copy[m];
	for(i=0;i<m;i++)
	copy[i]=vest[i];
	for(i=0;i<n;i++){  int count=0;
	    for(j=0;j<m;j++){
	        if(sol[i]>=copy[j]-x&&sol[i]<=copy[j]+y){
	        count++;
	        copy[j]=-100;
	        break; } }
	    if(count>0)
	    success++;
	    if(success==m)
	    break; }
	printf("%d",success);
	return 0; }