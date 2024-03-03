#include <stdio.h>
#include <stdlib.h>
int count;
int hanoi(int num,long a)
{  int i;
   long b=1;
   int c=num;
   if(c<=50) {
    for(i=1;i<=num;i++) {
        b=b*2; }
    b=b-1;
    if(a==b)
    return 1;
    else {
    hanoi(num+1,a);
    c++; } }
   else
   return 0;
   return 0; }
int main() {
int t,i,k;
int c=0;
scanf("%d\n",&t);
long ar[t];
for(i=0;i<t;i++) {
    scanf("%ld\n",&ar[i]); }
for(i=0;i<t;i++) {
    c=0;
    k=hanoi(c,ar[i]);
    if(k==1)
    printf("yes\n");
    else
    printf("no\n"); }
	return 0; }