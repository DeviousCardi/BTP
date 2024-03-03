#include <stdio.h>
#include <stdlib.h>
int count=0;
int a[21], b[21], c[21], l, m, n;
void norm() {
    int i;
    for(i=0;i<21;i++) {
	    a[i]=i+1;
	    b[i]=c[i]=21; }
	l=0;
	m=n=19; }
int small(int* a, int* b) {
    if(a<b) {
        return *a; }
    else {
        return *b; } }
int hanoi(int k, int i) {
    if(k==1) {
        count++; }
    else if(k==0) {
        return count; }
    else {
        if(a[i]==k) {
            count++; }
        else { } }
    return count; }
int main() {
	int t, k, i;
	scanf("%d", &t);
	norm();
	for(i=1;i<=t;i++) {
	    scanf("%d", &k);
	    printf("%d\n",hanoi(k,0));
	    norm(); }
	return 0; }