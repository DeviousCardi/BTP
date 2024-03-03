#include <stdio.h>
#include <stdlib.h>
int main() {
	int N,occ[20000];
	int sum=0;
	scanf("%d",&N);
	int list[N];
	for(int i=0;i<20000;i++)
	{occ[i]++; }
	for(int i=0;i<N,i++) {
	    scanf("%d ",&list[i]); }
	for(int i=0;i<N;i++) {
	    for(int j=i+1;j<N;j++) {
	        if(list[j]<list[i]) {
	            sum++;
	            occ[i]++; } } }
	printf("%d\n",sum);
	for(int k=0;k<N;k++) {
	    printf("%d ",occ[i]) }
	return 0; }