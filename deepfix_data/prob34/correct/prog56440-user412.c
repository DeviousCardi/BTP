#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int a[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]); }
	int t,j;
	int b[20];
	scanf("%d\n",&t);
	for(j=0;j<t;j++){
	    scanf("%d\n",&b[j]);
	    if(b[j]==0){
	        if(a[0]>a[1]){
	            printf("Yes\n"); }
	        else{
	            printf("No\n"); } }
	    else if(b[j]==(n-1)){
	        if(a[n-1]>a[n-2]){
	            printf("Yes\n"); }
	        else{
	            printf("No\n"); } }
	    else if(b[j]>0&&b[j]<(n-1)){
	        if(a[b[j]]>a[b[j]-1]&&a[b[j]]>a[b[j]+1]){
	            printf("Yes\n"); }
	        else{
	            printf("No\n"); } } }
	return 0; }