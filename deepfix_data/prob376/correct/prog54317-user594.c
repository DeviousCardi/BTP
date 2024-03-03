#include <stdio.h>
#include <stdlib.h>
long int count=0;
long int balparen(char a[],int n,int pos, int open, int close){
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
	int t,k[100],i;
	char a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	scanf("%d\n",&k[i]);
	count=balparen(a,k,0,0,0);
	printf("%ld\n",count); }
	return 0; }