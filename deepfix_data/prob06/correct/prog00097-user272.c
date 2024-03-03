#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i=0,j=0,count=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int vests[n],soldiers[m];
	for(i=0;i<n;i++)
	scanf("%d ",&vests[i]);
	for(i=0;i<m;i++)
	scanf("%d ",&soldiers[i]);
    for(i=0;i<n;i++) {
     if(vests[j]-x<=soldiers[i]&&vests[j]+y>=soldiers[i]) {
        printf("%d %d ",j+1,i+1);
        j=j+1;
        count=count+1; }
    if(vests[j]+y<soldiers[i]||vests[j]-x>soldiers[i]) {
        j=j+1; } }
	return 0; }