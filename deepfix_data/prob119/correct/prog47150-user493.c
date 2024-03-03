#include <stdio.h>
#include <stdlib.h>
void moves(int n,char from,char to,char temp);
long int hanoi(int n){
    if(n==1){
        return 1; }
    else if(n==-0){
        return 0; }
    else return(2*hanoi(n-1)+1); }
int main() {
	int t,i,s;
	scanf("%d",&t);
	int k[t];
	for(i=0;i<t;i++){
	    scanf("%d\n",&k[i]); }
	for(i=0;i<t;i++){
	    printf("%ld\n",hanoi(k[i])); }
	return 0; }