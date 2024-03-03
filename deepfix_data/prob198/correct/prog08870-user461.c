#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void input (int t[],int n) {
        for(int i=0;i<n;i++) {
               scanf("%d",&t[i]); } }
int main() {
	int N1=0;int N2=0,i,j;
    scanf("%d",&N1);
    int a1[N1];
	input(a1,N1);
	scanf("%d",&N2);
	int a2[N2];
	input(a2,N2);
	int max=INT_MIN;
	for(i=0;i<N1;i++) {
	       for(j=0;j<N2;j++) {
	             if(a1[i]==a2[j]) {
	                 a1[i]=INT_MIN;
	                 break; } }
	        if(max<a1[i])
	           max=a1[i]; }
	 if(max==INT_MIN)
	 printf("NO");
	 else
	 printf("%d",max);
	return 0; }