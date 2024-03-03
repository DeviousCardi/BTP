#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,S,j;
		int a[N];
	scanf("%d%d",&N,&S);
	printf("%d",N);
	printf("/n");
	for(i=0;i<=N;i++){
	    scanf("%d",&a[i]);
	    printf("%d",a[i]); }
	printf("/n");
	printf("%d",S);
	for(j=1;j<=N;j++){
	    for(i=1;i<=N;i++){
	   while a[i]+a[j]=N
	        {scanf("%d%d",&a[i],&a[j]);
	        printf("(%d,%d)",a[i],a[j]); }
	        continue; }
	    printf("/n"); }
	return 0; }