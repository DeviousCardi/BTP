#include <stdio.h>
#include <stdlib.h>
int *C; int n; int count=0;
int a,b;
void check() {
    int start=0,end=0; int i,j;
    while(i=0,j=n-1) {
        start+=C[i];
        end+=C[j]; } }
void input() {
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",C+i);
        count+=*(C+i); } }
int main() {
	scanf("%d",&n);
	C=(int*)malloc(n*sizeof(int));
	input();
	check();
	return 0; }