#include <stdio.h>
#include <stdlib.h>
int cat(int test,int p,int n) {
   if(p>test) {
       return 0; }
   else if(p==test) {
       return 1; }
   else {
     return  cat(test,p*2*(2*n+1)/(n+2),n+1); } }
int main() {
	int t,i,j,count=0;
	scanf("%d",&t);
	int arr[t];
	for (i=0;i<t;i++){
	    scanf("%d",&arr[i]); }
	for (i=0;i<t;i++){
	    for (j=0;j<17;j++){
	        if(arr[i]==cat(j,1,1)){
	            printf("Yes\n");
	            break;
	            count++; } } }
	    if (count==0){
	        printf("No"); }
	return 0; }