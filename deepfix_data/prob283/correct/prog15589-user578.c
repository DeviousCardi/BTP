#include <stdio.h>
#include <stdlib.h>
int ack(int m, int n) {
    if (m==0) {
        return n+1; }
    else if ((m>0)&&(n==0)) {
        return ack(m-1,1); }
    else if ((m>0)&&(n>0)) {
        return ack(m-1,ack(m,n-1)); } }
int main() {
	int k,i,j,r;
	scanf("%d", &k);
    for(i=0;i<=3;i++) {
        for(j=0;j<=5;j++) {
            r = ack(i,j);
            if(k == r) {
                printf("%d",i);
                printf(" ");
                printf("%d",j);
                break; }
            else {
                printf("-1"); } } }
	return 0; }