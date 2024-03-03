#include <stdio.h>
#include <stdlib.h>
int ackrmn(int x,int y);
int main() {
	int m,n,k;
	scanf("%d",&k);
	int c=0;
	for(m=0;m<=3;m++) {
	   for(n=0;n<=5;n++) {
	    if(k==ackrmn(m,n)) {
	        printf("%d %d",m,n);
	        c++;
	        break; } }
         if(c==1)
             break; }
	if(c==0)
	      printf("-1");
	return 0; }
int ackrmn(int x,int y){
    if(x==0&&y>0) {
        return y+1; }
    if(y==0&&x>0) {
        return ackrmn(x-1,1); }
    else if(x>0&&y>0) {
        return ackrmn(x-1,ackrmn(x,y-1)); } }