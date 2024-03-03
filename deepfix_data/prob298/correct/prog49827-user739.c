#include <stdio.h>
#include <stdlib.h>
int catlan(int n) {
    int k;
    if(n==0)
    return 1;
    else
    k=(int)2*catlan(n-1)*((float)(2*n-1))/(n+1);
    return k; }
int main() {
    int i,t,j;
	scanf("%d",&t);
	int str[100];
	int cat[18];
	for(i=0;i<t;i++) {
	    scanf("%d",&str[i]); }
    for(i=0;i<18;i++) {
        cat[i]=catlan(i); }
    for(i=0;i<t;i++) {
        for(j=0;j<18;j++) {
            if(str[i]==cat[j])
            printf("Yes\n");
            else
            printf("No/n"); } }
	return 0; }