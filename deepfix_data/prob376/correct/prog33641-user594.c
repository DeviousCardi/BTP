#include <stdio.h>
#include <stdlib.h>
char balparen(char a[100],int n,int pos, int open, int close, int count){
    if(close==n){
        count++; }
    if(close<open){
        a[pos]='}';
        balparen(a,n,pos+1,open,close+1,count); }
    if(open<n){
        a[pos]='{';
        balparen(a,n,pos+1,open+1,close,count); }
    return count; }
int main() {
	char a[100];
	int n;
	scanf("%d",&n);
	balparen(a,n,0,0,0,0);
	return 0; }