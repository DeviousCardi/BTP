#include <stdio.h>
int mod(int x)
{int y;
scanf("%d",&y);
if(y>0)
return y; }
int main() {
    int n,i,j;
    scanf("%d",n);
	if(n>4) {
	    for(i=(n%4);i>=mod(n%4);i=i-1) {
	        for(j=i-1;j<=(n%4)j=j+1) {
	            print("%d",j); }
	        print("%d\n"); } }
	else(n<=4) {
	    for(i=n;i>=mod(n);i=i+1) {
	        for(j=i-1;j<=n;j=j+1) {
	        print("%d",j); }
	    print("%d\n"); } }
	return 0; }