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
	int x,n;
	scanf("%d",&x);
	for(n=1;n<30;n++) {
	    if(x/(power(10,n))==0) {
	        break; } }
	printf("%d",n);
	return 0; }