#include <stdio.h>
#include <stdlib.h>
int A(int m, int n) {
    if(m==0) {
        return n+1; }
    if((m>0)&&(n==0)&&(m<=3)) {
        return A(m-1,1); }
    if((m>0)&&(n>0)&&(m<=3)&&(n<=5)) {
        return A(m-1,A(m,n-1)); }
    return -1; }
int main() {
	return 0; }