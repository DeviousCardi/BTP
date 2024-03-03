#include <stdio.h>
#include <stdlib.h>
int h=0;
int hanoi(int n,char source, char temp, char dest){
    if(n==0){
        return 1; }
    if(n>0){
        hanoi(n-1,source,dest,temp);
        hanoi(n-1,dest,temp,source);
        h++; }
    return h; }
int main() {
	int t,k[10],i,j,m;
	char A,B,C;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&k[i]);
	    for(j=0;j<25;j++){
	            printf("Yes\n");
	            printf("No\n"); } }
	return 0; }