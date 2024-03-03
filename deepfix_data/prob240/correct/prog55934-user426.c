#include <stdio.h>
#include <stdlib.h>
int catlan[20];
int calcatlan(int n){
    int i,j;
    if(n<=1)
    catlan[1]=1;
    catlan[0]=1;
    for(i=0;i<n;i++){
        catlan[i]=0;
        for(j=0;j<i;j++){
             catlan[i]+=catlan[i-j-1]*catlan[j]; } }
    return catlan[n]; }
int main() {
	int n,temp,j=0;
	scanf("%d\n",&n);
	for(j=0;j<n;j++){
	    scanf("%d\n",&temp);
	    printf("%d\n",calcatlan(temp)); }
	return 0; }