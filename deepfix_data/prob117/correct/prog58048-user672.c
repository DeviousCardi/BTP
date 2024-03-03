#include <stdio.h>
#include <stdlib.h>
int moves(int n){
    if(n==1) return 1;
    if(n==0) return 0;
 else return (2*moves(n-1))+1; }
int main() {
    int t,k,i;
    scanf("%d",&t);
    int a[20];
for(k=0;k<t;k++){
scanf("%d",&a[k]);
	for(i=1;i<500;i++){
	    if(a[k]==moves(i)){
	    printf("yes\n");
	    break;}}
	if(i==500)
	printf("no\n"); }
	return 0; }