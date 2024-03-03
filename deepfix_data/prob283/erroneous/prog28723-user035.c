#include <stdio.h>
#include <stdlib.h>
int arr[4][6];
void ack(int m=3;int n=5) {
    if(m==0) {
        arr[m][n]=n+1; }
    else if(n==0) {
        arr[m][n]=ack(m-1,1); }
    else {
        arr[m][n]=ack(m-1,ack(m,n-1)); } }
int main() {
	int num,i,j;
	scanf("%d",&num);
	ack();
	for(i=0;i<4;i++) {
	    for(j=0;j<6;j++) {
	        if(arr[i][j]==num) {
	            printf("%d %d",i,j);
	            return 0; } } }
	printf("-1");
	return 0; }