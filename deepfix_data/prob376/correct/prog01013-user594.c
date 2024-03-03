#include <stdio.h>
#include <stdlib.h>
int count=0;
int balparen(char a[100],int n,int pos, int open, int close){
    if(close==n){
        count++; }
    if(close<open){
        a[pos]='}';
        balparen(a,n,pos+1,open,close+1); }
    if(open<n){
        a[pos]='{';
        balparen(a,n,pos+1,open+1,close); }
    return count; }
int main() {
	char a[100];
	int n,count;
	scanf("%d",&n);
	count=balparen(a,n,0,0,0);
	printf("%d",count);
	return 0; }