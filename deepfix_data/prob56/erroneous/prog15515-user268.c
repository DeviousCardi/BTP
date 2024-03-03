#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
   if(n==0) return 1;
   return ((2.0*((2*n)-1))/(n+1))*catalan(n-1); }
int main() {
	int arr[100];int t;int i,j;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&arr[i]); }
for(i=0;i<40;i++){
    for(j=0;j<t;j++){
        if(arr[j]<catalan(i)){
            printf("%d\n",catalan(i)); }
        else{i++;,j--;} } }
return 0; }