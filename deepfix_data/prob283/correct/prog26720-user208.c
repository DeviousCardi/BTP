#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n) {
    if(m==0)
        return n+1;
    else if((n==0)&&(m>0))
        return ack(m-1,1);
    else
        return ack(m-1,ack(m,n-1)); }
int check(int k) {
    int i,j;
    for(i=0;i<=3;i++) {
        for(j=0;j<=5;j++) {
            if(ack(i,j)==k) {
                printf("%d %d\n",i,j);
                return 1; } } } {
      printf("-1");
      return 0; } }
int main() {
	int k;
	scanf("%d",&k);
	check(k);
	return 0; }