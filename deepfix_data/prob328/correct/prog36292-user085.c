#include <stdio.h>
#include <stdlib.h>
int fib(int i) {
    if(i==1)
    return 0;
    else if(i==2)
    return 1;
    else
    return (fib(i-1) +fib(i-2)); }
void scan_arr(int a[100],int t) {
    int i;
    for(i=0;i<t;i++) {
        scanf("%d",&a[i]); } }
int main() {
	int t;
	scanf("%d",&t);
	int a[100];
	scan_arr(a,t);
	int i,j,c;
	for(i=0;i<t;i++) {
	    c=0;
	    for(j=1;j<=20;j++) {
	        if(a[i]==fib(j)) {
	            c=1;
	            break; } }
	    if(c==1)
	    printf("yes\n");
	    else
	    printf("no\n"); }
	return 0; }