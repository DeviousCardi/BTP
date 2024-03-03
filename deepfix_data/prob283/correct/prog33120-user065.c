#include <stdio.h>
#include <stdlib.h>
int ackerman(int m, int n) {
    if(m==0) {
        return (n+1); }
    else if (n==0) {
        return ackerman((m-1),1); }
    else {
        return ackerman((m-1),ackerman(m,(n-1))); } }
int main() {
	int k, m ,n , flag = 0;
	scanf("%d",&k);
	for(m=0;m<=3;m++) {
	    for(n=0;n<=5;n++) {
	        if (k==ackerman(m,n)) {
	            printf("%d %d",m,n);
	            flag = 1;
	            break; } }
	    if (flag==1) {
	        break; } }
	if (flag==0) {
	    printf("-1"); }
	return 0; }