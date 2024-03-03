#include <stdio.h>
#include <stdlib.h>
int cat(int n,int open,int close,int pos,int count) {
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else if(n==pos)
    return count;
    else if(close<open)
    return cat(n,open,close+1,pos+1,count+1);
    else if(open<n)
    return cat(n,open+1,close,pos+1,count+1);
    else
    return 0; }
int main() {
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    int k,j;
	    scanf("%d",&k);
	    for(j=0;j<100000;j++)
	    if(cat(j,0,0,0,0)>k) {
	        printf("%d\n",cat(j,0,0,0,1));
	        break; } }
	return 0; }