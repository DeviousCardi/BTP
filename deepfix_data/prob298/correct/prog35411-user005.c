#include <stdio.h>
#include <stdlib.h>
int count =0;
int catalan(char a[],int pos,int open,int close,int n){
    if(close==n){count++;return count;}
    if(open<n) {
        a[pos]='{';
        catalan(a, pos++, open++, close, n); }
    if(close<open) {
        a[pos]='}';
        catalan(a, pos++,open, close++,n); }
    return count; }
int main() {
	int n,pos=0, open=0, close=0,i,j,c=0;
	scanf("%d", &n);
	int a[20];
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]);
	    for(j=0;j<17;j++) {
	        char b[20];
	        if(a[i]==catalan(b,pos,open,close,j))
	        c++; }
	    if(c)
	    printf("yes\n");
	    else printf("no\n"); }
	return 0; }