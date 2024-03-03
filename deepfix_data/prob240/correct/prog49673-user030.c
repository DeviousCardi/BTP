#include <stdio.h>
#include <stdlib.h>
int count=0;
int cat(char a[100],int n, int pos, int close, int open) {
    if(close==n) {
        count++; }
    if(close<open) {
        a[pos]='}';
        cat(a,n,pos+1,open,close+1); }
    if(open<n) {
        a[pos]='{';
        cat(a,n,pos+1,open+1,close); } }
int main() {
    int t,i,j,k;
    char a[100];
    scanf("%d\n",&t);
    for(i=1;i<=t;i++) {
        scanf("%d\n",&k);
        j=0;
        while(cat(a,j,0,0,0)<k) {
            j++; }
        printf("%d\n",cat(a,count,0,0,0)); }
	return 0; }