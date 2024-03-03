#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,rem,num=0,e,count=1;
scanf("%d",&n);
if(n%10!=0) {
for(i=0;i<count;i++) {
    rem=n%10;
    e=10*rem;
    num=num+e; } }
count++;
if(num==n) {
    printf("YES"); }
else {
    printf("NO"); }
	return 0; }