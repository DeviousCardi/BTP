#include <stdio.h>
#include <stdlib.h>
int *C; int n; int count=0;
int a,b; int tot_time=0;
int sum(int m) {
    int i,s=0;
    for(i=0;i<m;i++) {
        s=s+C[i]; }
    return s; }
void check() {
    int start=0,end=0; int i=0,j=n-1;
    while(i<=j) {
        tot_time+=1;
        if(tot_time==sum(i)) {
            a++; }
        else {
            b++; } } }
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