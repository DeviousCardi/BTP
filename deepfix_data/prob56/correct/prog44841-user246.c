#include <stdio.h>
#include <stdlib.h>
int count;
void cat(int n,int open,int close) {
    if(n==close) {
        count=count+1;
       printf("%d",count);
        return; }
    if(close<open)
    cat(n,open,close+1);
    return;
    if(open<n)
    cat(n,open+1,close);
    return; }
int main() {
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    int k,j;
	    count=0;
	    scanf("%d",&k);
	    for(j=0;j<100000;j++) {
	        cat(j,0,0);
	        if(count>k) {
	            printf("%d %d",j,count);
	            break; } } }
	return 0; }