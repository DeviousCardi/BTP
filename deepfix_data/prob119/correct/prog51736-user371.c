#include <stdio.h>
#include <stdlib.h>
int count;
int a[20], b[20], c[20];
int* small(int a, int b) {
    int* p;
    if(a<b) {
        p=&a; }
    else {
        p=&b; } }
int hanoi(int k) {
    return 0; }
int main() {
	int t, k, i;
	for(i=0;i<20;i++) {
	    a[i]=i+1;
	    b[i]=c[i]=-1; }
	scanf("%d", &t);
	for(i=1;i<=t;i++) {
	    scanf("%d", &k);
	    printf("%d\n",hanoi(k)); }
	return 0; }