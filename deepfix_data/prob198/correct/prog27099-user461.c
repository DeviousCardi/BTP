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
	int min=INT_MAX;
	for(i=0;i<N1;i++) {
	       for(j=0;j<N2;j++) {
	             if(a1[i]==a2[j]) {
	                 a1[i]=INT_MAX;
	                 break; } }
	        if(min>a1[i])
	           min=a1[i]; }
	 if(min==INT_MAX)
	 printf("NO");
	 else
	 printf("%d",min);
	return 0; }