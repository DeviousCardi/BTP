#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,S,j;
	scanf("%d%d",&N,&S);
	int a[N];
	printf("\n");
	for(i=0;i<=N-1;i++){
	    scanf("%d",&a[i]); }
	printf("\n");
	for(j=0;j<=N-1;j++){
	    for(i=0;i<=N-1;i++){
	   while (a[i]+a[j]==S)
	        {scanf("%d%d",&a[i],&a[j]);
	        printf("(%d,%d)",a[i],a[j]);}
	        continue; }
	    printf("\n"); }
	return 0; }