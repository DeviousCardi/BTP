#include <stdio.h>
#include <stdlib.h>
int count=0;
void hanoi(int k) {
    if(k==0) {
        count++; }
    else {
     hanoi(k-2);
     count++;
     hanoi(k-2); } }
int main() {
   int t,k,i;
   scanf("%d",&t);
   for(i=0;i<t;i++) {
       scanf("%d",&k);
       hanoi(k);
       printf("%d\n",count);
       count=0; }
	return 0; }