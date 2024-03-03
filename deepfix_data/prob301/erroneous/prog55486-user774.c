#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,i,j;
	scanf("%d",&N);
	int t[N];
	if(N==1)
	printf("%c",t[0]);
	else {
	    int count[i];
	    for(i=0;i<N;i++) {
	        int count[i]=1;
	        scanf("%d",&t[i]);
	        for(j=0;j<i;j++) {
	            if(t[i]==t[j])
	            count[i]++;
	            else
	            count[i]=count[i]; } }
	    int max;
	    for(i=0;i<N-1;i++) {
	        if(count[i]<=count[i+1])
	        max=count[i+1];
	        else
	        max=max; }
	    max=count[p];
	    printf ("%d",t[p]); }
	return 0; }