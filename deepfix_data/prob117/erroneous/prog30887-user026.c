#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int count;
void hanoi(int num) {
   if(num>=0) {
   honoi(num-1);
   int b=(pow(2*num))-1; }
int main() {
int t,k,i;
scanf("%d\n",&t);
int ar[t];
for(i=0;i<t;i++) {
    scanf("%d\n",ar[i]); }
for(i=0;i<t;i++) {
    k=hanoi(ar[i]); }
	return 0; }