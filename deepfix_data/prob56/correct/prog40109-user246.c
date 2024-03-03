#include <stdio.h>
#include <stdlib.h>
void cat(int n,int open,int close,int *count) {
    if(n==close) {
        *count=*count+1;
        return; }
    if(close<open)
    cat(n,open,close+1,count);
    return;
    if(open<n)
    cat(n,open+1,close,count);
    return; }
int main() {
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    int k,j,count;
	    scanf("%d",&k);
	    for(j=1;j<100000;j++)
	    {   count=0;
	        cat(j,0,0,&count);
	        printf("%d",count);
	        if(count>k) {
	            printf("%d\n",j);
	            break; } } }
	return 0; }