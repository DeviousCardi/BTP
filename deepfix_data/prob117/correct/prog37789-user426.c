#include <stdio.h>
#include <stdlib.h>
int hanoi[25];
int steps(int m){
    int steps=0,j;
    for(j=0;j<m;j++){
        steps=1+2*steps; }
    return steps; }
int no_steps(int n){
    int j;
    for(j=0;j<25;j++){
    if(n==steps(j))
    return 1; }
    return 0; }
int main() {
	int i=0,n,temp;
	int ary[20];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
	    scanf("%d\n",&temp); }
	for(i=0;i<n;i++){
	    if(no_steps(ary[i]))
	    printf("no\n");
	    else
	    printf("yes\n"); }
	return 0; }