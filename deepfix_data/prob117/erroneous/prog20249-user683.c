#include <stdio.h>
#include <stdlib.h>
int hanoi(int k){
    if(k==0) return 0;
    else return (1+2*hanoi(k-1)); }
int main() {
	int t;
	scanf("%d",&t);
	int k[t];
	int i;
	for(i=0;i<t;i++){
	    scanf("%d",&k[i]);
	    f=0;
	    while(hanoi(c)<=k[i]) {
	        if(hanoi(c)==k[i]) {
	            f=1; }
	        c++; }
	    if(f==1) printf("yes");
	    else printf("no"); }
	return 0; }