#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void input (int t[],int n) {
        for(int i=0;i<n;i++) {
               scanf("%d",&t[i]); } }
int main() {
	int N1=0;int N2=0,i,j;
	int a1[N1],a2[N2];
	scanf("%d",&N1);
	input(a1,N1);
	scanf("%d",&N2);
	input(a2,N2);
	int max=0;
	for(i=0;i<N1;i++) {
	       for(j=0;j<N2;j++) {
	             if(a1[i]==a2[j]) {
	                 a1[i]=INT_MIN;
	                 break; } }
	        if(max<a1[i])
	           max=a1[i]; }
	 printf("%d",max);
	return 0; }