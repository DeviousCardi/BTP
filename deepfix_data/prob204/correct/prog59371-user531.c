#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,rem,num=0,e,count=1;
scanf("%d",&n);
rem=n%10;
if(rem!=0) {
    count++; }
if(n%10!=0) {
for(i=0;i<count;i++) {
    rem=n%10;
    e=10*rem;
    num=num+e; } }
if(num==n) {
    printf("YES"); }
else {
    printf("NO"); }
	return 0; }