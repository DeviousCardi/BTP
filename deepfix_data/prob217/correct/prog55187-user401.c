#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,S,j;
	scanf("%d",&N);
	int a[N];
	printf("\n");
	for(i=0;i<=N-1;i++){
	    scanf("%d",&a[i]); }
	printf("\n");
	scanf("%d",&S);
	for(j=0;j<=N-1;j++){
	    for(i=0;i<=N-1;i++){
	   if(a[i]+a[j]==S && a[i]!=a[j])
	        {scanf("%d%d",&a[i],&a[j]);
	        printf("(%d,%d)",a[i],a[j]);}
	        continue; }
	    printf("\n"); }
	return 0; }