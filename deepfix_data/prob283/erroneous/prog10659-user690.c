#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n){
    if(m==0) {
        return n+1; }
    else if(m>0&&n==0) {
        return ack(m-1,1); }
    else if(m>0&&n>0) {
        return ack(m-1,ack(m,n-1)); } }
int main() {
	int integer;
	scanf("%d",&integer);
	if (integer==ack(m,n)){
	    printf("%d%d",m,n); }
	return 0; }