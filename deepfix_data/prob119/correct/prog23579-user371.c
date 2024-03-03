#include <stdio.h>
#include <stdlib.h>
int count=0;
int a[20], b[20], c[20];
void norm() {
    int i;
    for(i=0;i<20;i++) {
	    a[i]=i+1;
	    b[i]=c[i]=-1; } }
int* small(int a, int b) {
    int* p;
    if(a<b) {
        p=&a; }
    else {
        p=&b; }
    return p; }
int hanoi(int k) {
    if(k==1) { }
    return count; }
int main() {
	int t, k, i;
	scanf("%d", &t);
	for(i=1;i<=t;i++) {
	    scanf("%d", &k);
	    printf("%d\n",hanoi(k));
	    norm(); }
	return 0; }