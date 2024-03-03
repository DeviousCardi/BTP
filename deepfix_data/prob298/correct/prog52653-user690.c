#include <stdio.h>
#include <stdlib.h>
int cat(int n)
{int i;
   if (n==0){
       return 0; }
 int res = 0;
    for (i=0; i<n; i++)
        res =res + cat(i)*cat(n-i-1);
 return res; }
int main() {
	int t,i,j,count=0;
	scanf("%d",&t);
	int arr[t];
	for (i=0;i<t;i++){
	    scanf("%d",&arr[i]); }
	for (i=0;i<t;i++){
	    for (j=0;j<17;j++){
	        if(arr[i]==cat(j)){
	            printf("Yes\n");
	            break;
	            count++; } } }
	    if (count==0){
	        printf("No"); }
	return 0; }