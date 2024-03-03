#include <stdio.h>
#include <stdlib.h>
int no_steps(int m){
    if(m==1)
    return 1;
    return 1+2*no_steps(m-1); }
int if_steps(int n){
    int j;
    for(j=1;j<=25;j++){
        if(n==no_steps(j))
        return 1; }
    return 0; }
int main() {
	int i=0,n;
	int ary[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&ary[i]); }
	for(i=0;i<n;i++){
	    if(no_steps(ary[i]))
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }