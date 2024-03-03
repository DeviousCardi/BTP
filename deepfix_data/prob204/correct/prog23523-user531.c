#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,rem,num=0,e,d;
scanf("%d",&n);
d=n/10;
if(n%10!=0) {
for(i=0;i<n;i++) {
    rem=d%10;
    e=10*rem;
    num=num+e; } }
if(num==n) {
    printf("YES"); }
else {
    printf("NO"); }
	return 0; }