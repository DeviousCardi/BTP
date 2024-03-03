#include <stdio.h>
#include <stdlib.h>
int moves(int n, char from, char to, char temp){
    int count=0;
    if(n>0){
        count=moves(n-1,from,to,temp);
        count++;
        count+=moves(n-1,to,temp,from); }
    return count; }
int main() {
	int t,s,i;
	scanf("%d",&t);
	int k[t];
	for(i=0;i<t;i++){
	    scanf("%d\n",&k[i]); }
	for(i=0;i<t;i++){
	    s=moves(k[i],'A','B','C');
	    printf("%d\n",s); }
	return 0; }