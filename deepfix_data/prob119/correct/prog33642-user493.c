#include <stdio.h>
#include <stdlib.h>
int moves(int n,char from,char to,char temp){
    int c;
    if(n>0){
        c=1+moves(n-1,from,to,temp); }
    return c; }
int main() {
	int t,i,s;
	scanf("%d",&t);
	int k[t];
	for(i=0;i<t;i++){
	    scanf("%d\n",&k[i]); }
	for(i=0;i<t;i++){
	    s=moves(k[i],'A','B','C');
	    printf("%d\n",s); }
	return 0; }