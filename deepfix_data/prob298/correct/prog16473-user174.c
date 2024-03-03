#include <stdio.h>
#include <stdlib.h>
int c=0;int k;
void parenthesis(pos,open,close) {
    if (close==k)
    c++;
    if (close<open)
     parenthesis(pos+1,open,close+1);
    if(open<k)
    parenthesis(pos+1,open+1,close); }
int main() {
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    c=0;
	    parenthesis(0,0,0);
	    if (c==k)
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }