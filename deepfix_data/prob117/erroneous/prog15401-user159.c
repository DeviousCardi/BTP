#include <stdio.h>
#include <stdlib.h>
int  toh(int n,int a,int b,int c) {
 int sol;
 if(n==1) return 1;
   sol=2+toh(n-1,b,a,c);
 return sol; }
int main() {
	int t,i,n,k[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
    for(i=0;i<t;i++) {
        for(n=0;n<1000;n++) {
if(toh(n,a,b,c)==k[i]) { printf("yes"); break;}
       if(ton(n,a,b,c)>k[i]) { printf("no"); break;} }
	return 0; }