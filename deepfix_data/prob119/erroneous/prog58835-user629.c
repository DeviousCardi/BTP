#include <stdio.h>
#include <stdlib.h>
void hanoi(int k) {
    if(k==1) {
        count++; }
    else {
     hanoi(k-1);
     count++;
     hanoi(k-1); } }
int main() {
   int t,k,i;
   int count=0;
   scanf("%d",&t);
   for(i=0;i<t;i++) {
       scanf("%d",&k);
       hanoi(k);
       printf("%d",count); }
	return 0; }