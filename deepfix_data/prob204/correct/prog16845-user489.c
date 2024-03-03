#include <stdio.h>
#include <stdlib.h>
int power(int a,int b) {
    int i,s=a;
    if(b==1)
    return a;
    else {
        for(i=1;i<b;i++) {
            s=s*a; }
        return s; } }
int main() {
	int x,n,s=0,k;
	scanf("%d",&x);
	for(n=1;n<30;n++) {
	    if(x/(power(10,n))==0) {
	        break; } }
	    for(k=1;k<=n/2;k++) {
	        if(x/(power(10,k))==x/(power(10,n-k))) {
	            s=s+1; } }
	    if(s>=n/2) {
	        printf("NO"); }
	    else {
	        printf("YES"); }
	return 0; }