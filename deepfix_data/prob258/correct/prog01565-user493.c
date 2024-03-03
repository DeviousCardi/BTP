#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
	for(i=0;i<=n-1;i++){
	    scanf("%d",&a[i]); }
	if (n==1){
	   if (a[0]%2==0) printf ("No");
	   if (a[0]%2!=0) printf("Yes"); }
	if(n!=1){
	for(i=0;i<=n;i++){
	    if( (a[i]>a[i+1])&&(a[i]>a[i-1])){
	    printf("Yes"); break;} } }
	for(i=0;i<=n;i++){
	    if((a[i]<a[i+1])&&(a[i]<a[i-1]))
	    printf("No"); break; }
	return 0; }