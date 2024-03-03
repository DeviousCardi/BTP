#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,count,max=1;
	scanf("%d",&n);
	printf("%d\n",n);
	int a[10000],s[10000];
	for(i=0;i<n;i++){
	    scanf("%d ",&a[i]); }
	for(i=0;i<n;i++){
	    count=1;
	    j=i;
	    while((a[j]==a[j+1]) && (j<n-1)){
	        count++;j++; }
	    s[i]=count;printf("%d\n",s[i]); }
	for(i=0;i<n;i++){
	    if(max<s[i]){max=s[i];} }
	for(i=n-1;i>=0;i--){
	    if(max==s[i])printf("%d",a[i]); }
	printf("%d",max);
	return 0; }