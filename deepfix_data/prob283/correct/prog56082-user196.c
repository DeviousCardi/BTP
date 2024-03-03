#include <stdio.h>
#include <stdlib.h>
int ackerman(int m, int n) {
    if(m==0) {
        return n+1; }
    if(n==0 && m>0) {
        return ackerman(m-1,1); }
    if(m>0 &&n>0) {
        return ackerman(m-1,ackerman(m,n-1)); }
    return 0; }
int main() {
    printf("%d",ackerman(3,2));
	return 0; }