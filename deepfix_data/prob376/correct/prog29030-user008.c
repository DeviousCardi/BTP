#include <stdio.h>
#include <stdlib.h>
int count=0;
void cat(char a[],int n,int pos,int open,int close) {
    if(close==n){
        count++;return; }
    if(open<n){
    a[pos]='{';
    cat(a,n,++pos,++open,close); }
    if(close<open){
    a[pos]='}';
    cat(a,n,++pos,open,++close); }
    return; }
int main() {
	char a[100];
	cat(a,4,0,0,0);
	printf("%d\n",count);
	return 0; }