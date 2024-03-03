#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,j,min1=0,min2=0,M,N;
	scanf("%d",&n1);
	scanf("%d",&n2);
	int a1[n1],a2[n2];
	if(n1<20&&n2<20){
	    for(i=0;i<n1;i++){
	        scanf("%d",&M);
	        a1[i]=M;
	        if(min1>M) min1=M; }
	    for(j=0;j<n2;j++){
	        scanf("%d",&N);
	        a2[j]=N;
	        if(min2>N) min2=N; } }
	if(min1!=min2) printf("%d",min1);
	else printf("NO");
	return 0; }