#include <stdio.h>
#include <stdlib.h>
int hanoi(int h){
    if(h==0) return 0;
    else return (1+2*hanoi(h-1)); }
int main() {
	int t,f,c,k[100];
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
	    scanf("%d",&k[i]);
	    f=0;
	    c=0;
	    while(hanoi(c)<=k[i]) {
	        if(hanoi(c)==k[i]) {
	            f=1; }
	        c++; }
	    if(f==1) printf("yes");
	    else printf("no");
	    printf("\n"); }
	return 0; }