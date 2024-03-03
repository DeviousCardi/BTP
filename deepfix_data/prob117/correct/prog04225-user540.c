#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi(int n) {
     return hanoi(n-1); }
int main() {
	int t,i;
	int a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	        scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
	    if(a[i]<0){
	        printf("no1\n"); }
	    if (a[i]==0){
	        printf("yes2\n"); }
        if ((a[i]+1)%2==0&&a[i]>0)  {
      printf("yes3\n"); }
       else
         printf("no4\n"); }
	return 0; }