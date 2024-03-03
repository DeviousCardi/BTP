#include <stdio.h>
#include <stdlib.h>
int count;
int catalan(char a[20],int pos,int open,int close,int n){
    if(close==n){count++;return count;}
    if(open<n) {
        a[pos]='{';
        catalan(a,pos+1, open+1, close, n); }
    if(close<open) {
        a[pos]='}';
        catalan(a,pos+1,open, close+1,n); }
    return count; }
int main() {
    count = 0;
	int n,pos=0, open=0, close=0,i,j,c=0;
	char c1[20];
	printf("%d\n",catalan(c1,0,0,0,2));
	printf("%d\n",catalan(c1,0,0,0,3));
	printf("%d\n",catalan(c1,0,0,0,4));
	scanf("%d", &n);
	int a[20];
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]);
	    for(j=0;j<7;j++) {
	        char b[20];
	        if(a[i]==catalan(b,0,0,0,j))
	        c++; }
	    if(c)
	    printf("yes\n");
	    else printf("no\n"); }
	return 0; }