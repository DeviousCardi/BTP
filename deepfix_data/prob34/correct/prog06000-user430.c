#include <stdio.h>
#include <stdlib.h>
int main() {
		int A[20],n,t,B[20],i;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	 A[i]=getchar();
	scanf("%d",&t);
	for(i=0; i<t; i++)
	 B[i]=getchar();
	for(i=0; i<t; i++){
	    if(i==0){
	    if(A[B[0]]>A[B[1]]||(n==1))
	        printf("Yes\n");
	       break;}
	       else
	if(A[B[i]]>A[B[i-1]]&&A[B[i]]>A[B[i+1]])
	printf("Yes\n");
	else printf("No\n");}
	return 0; }