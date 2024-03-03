#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i;
	int a[i],d,e,n,f,g=1;
	float c;
	scanf("%d",&n);
	for(f=1;f<=100;f++) {
	    c=n/pow(10,f);
	    if(c<1) {
	    d=f;
	    break; }
	    else ; }
	for(i=0;i<d;i++) {
	    g=g*10;
	    a[i] = (n%g*10-n%g/g; }
	for(f=0;f<d;f++) {
	    if(a[f]==a[d-f-1]) {
	    e=d+1; }
	    else {
	    e=0;
	    break; } }
	if(e==d+1) {
	printf("YES"); }
	else {
	printf("NO"); }
	return 0; }