#include <stdio.h>
#include <stdlib.h>
int toh(int n) {
    if (n==1)
    return 1;
    else return 2*toh(n-1)+1; }
int main() {
	int n,i,t,k[20];
	scanf("%d\n",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k[i]); }
	for(n=0;n<45;n++) {
	    for(i=1;i<=t;i++) {
	        if (k[i]==toh(n)) {
	            printf("yes");
	            break; }
	        else continue; }
	    if(k[i]==toh(n)) {
	        break; } }
	if(k[i]!=toh(n)) {
	    printf("no"); }
	return 0; }