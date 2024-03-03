#include <stdio.h>
#include <stdlib.h>
char balparen(char a[100],int n,int pos, int open, int close, int count){
    int i;
    if(close==n){
        for(i=0;i<2*n;i++){
            printf("%c",a[i]); }
        count++;
        printf("%d\n",count); }
    if(close<open){
        a[pos]='}';
        balparen(a,n,pos+1,open,close+1,count); }
    if(open<n){
        a[pos]='{';
        balparen(a,n,pos+1,open+1,close,count); }
    return 0; }
int main() {
	char a[100];
	int n;
	scanf("%d",&n);
	balparen(a,n,0,0,0,0);
	return 0; }