#include <stdio.h>
#include <stdlib.h>
int check(int num) {
    int out;
    if(num==0) {
        return 1; }
    else if(num%2==1) {
        out=check((num-1)/2); }
    else {
        out=0; }
    return out; }
int main() {
	int t,i,num,input;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&input);
	    num=check(input);
	    if(num==1) {
	        printf("yes\n"); }
	    else {
	        printf("no\n"); } }
	return 0; }