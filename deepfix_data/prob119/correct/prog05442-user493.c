#include <stdio.h>
#include <stdlib.h>
long long int moves(int n, char from, char to, char temp){
    int count;
    if(n>0){
        count=1+2*moves(n-1,from,to,temp); }
    return count; }
int main() {
	int t,i;
	long long int s;
	scanf("%d",&t);
	int k[t];
	for(i=0;i<t;i++){
	    scanf("%d\n",&k[i]); }
	for(i=0;i<t;i++){
	    s=moves(k[i],'A','B','C');
	    printf("%lld\n",s); }
	return 0; }