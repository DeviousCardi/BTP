#include <stdio.h>
#include <stdlib.h>
char balparen(char a[],int n,int pos, int open, int close){
    int i;
    if(close==n){
        for(i=0;i<n;i++){
            printf("%c",a[i]); } }
    if(close<open){
        a[pos]='}';
        balparen(a[],n,pos+1,open,close+1); }
    if(open<n){
        a[pos]='{';
        balparen(a[],n,pos+1,open+1,close); } }
int main() {
	char a[100];
	int n;
	scanf("%d",n);
	balpren(a[],n,0,0,0);
	return 0; }