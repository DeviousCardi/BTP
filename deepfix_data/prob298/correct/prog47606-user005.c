#include <stdio.h>
#include <stdlib.h>
int count =0;
int catalan(char a[],int pos,int open,int close,int n){
    if(close==n){count++;return 1;}
    if(open<n) {
        a[pos]='{';
        catalan(a, pos++, open++, close, n); }
    if(close<open) {
        a[pos]='}';
        catalan(a, pos++,open, close++,n); }
    return count; }
int main() {
	int n,pos=0, open=0, close=0,i,j;
	scanf("%d", &n);
	int a[n];
	char b[2*n];
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]);
	    pos=0, open=0, close=0;
	    for(j=0;j<17;j++) {
	        if(a[i]==catalan(b,pos,open,close,j))
	        printf("yes\n");
	        else printf("no\n"); } }
	return 0; }