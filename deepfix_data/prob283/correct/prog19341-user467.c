#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n,k;
	scanf("%d",&k);
	int c=0;
	for(m=1;m<=3;m++) {
	   for(n=1;n<=5;n++) {
	    if(k==ackrmn(m,n)) {
	        printf("%d%d",&m,&n); }
	    c++;
	    break; }
	  if(c==0) {
	      return -1; } }
	return 0; }
int ackrmn(int x,int y){
    if(x==0) {
        return y+1; }
    if(y==0) {
        return ackrmn(x-1,1); }
    else {
        return ackrmn(x-1,ackrmn(x,y-1)); } }