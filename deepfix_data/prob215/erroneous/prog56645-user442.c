#include <stdio.h>
#include <stdlib.h>
int perfect(int);
int isprime(int);
int main() {
	int n;
	scanf("%d",&n);
	if(perfect(n)) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }
int isprime(int x) {
    int i;
    for(i=2; i*i<x; i++) {
        if(x%i==0) {
            return 0; } }
    return 1; }
int perfect(int y) {
    int i, sum=0;
    for(i=2; i<=n; i++) {
        if(isprime(i) && y%i==0) {
            sum=sum+i; } }
    if(sum==y) {
        return 1; }
    else {
        return 0; } }