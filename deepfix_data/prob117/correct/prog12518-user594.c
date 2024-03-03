#include <stdio.h>
#include <stdlib.h>
int hanoi(int n){
    if(n>0)
        return 2*hanoi(n-1)+1;
    else
        return 0; }
int main() {
	int t,i,j,flag;
	int k[10];
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&k[i]);
	    flag=0;
	    for(j=0;j<25;j++){
	        if(k[i]==hanoi(j)){
	            printf("yes\n");
	            flag=1;
	            break; } }
	    if(flag==0)
	            printf("no\n"); }
	return 0; }