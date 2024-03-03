#include <stdio.h>
#include <stdlib.h>
int count=0;
void cat(int n,int pos,int open,int close) {
    if(close==n){
        count++;return; }
    if(close<open)
    cat(n,pos+1,open,close+1);
    if(open<n)
    cat(n,pos+1,open+1,close);
    return; }
int main() {
	cat(15,0,0,0);
	printf("%d\n",count);
	return 0; }