#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int T(int);
int T(int n) {
    if(n==2) {
        return 1; }
    if (n%2==0){
        return T(n/2); }
     else
     return 0; }
int main() {
	int t,i;
	int a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	        scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
	        if (a[i]==0){
	            printf ("yes\n"); }
	        if(T(a[i]+1)==1&&a[i]!=0) {
	            printf("yes\n"); }
	        else
	        printf("no\n"); }
	return 0; }