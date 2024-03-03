#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0) {
        return 1; }
    else {
        return (((4*n)+2)/(n+2))*catalan(n-1); } }
void display(int k) { }
int main() {
    printf("%d",catalan(2));
	return 0; }