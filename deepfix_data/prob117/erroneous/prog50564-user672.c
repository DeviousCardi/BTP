#include <stdio.h>
#include <stdlib.h>
int moves(int n){
    if(n==1) return 1;
 else return (moves(n-1)+1); }
int main() {
    int t,k,i;
    scanf("%d",&t);
    int a[20]
for(k=0;k<t;k++){
    scanf("\n");
scanf("%d",&a[i]);
	for(i=0;i<5000000;i++){
	    if(a[i]==moves(i))
	    printf("yes"); }
	if(i==5000001)
	printf("no"); }
	return 0; }