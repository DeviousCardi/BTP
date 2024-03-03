#include <stdio.h>
#include <stdlib.h>
int proper(int a) {
    int i;
    int ans;
    for(i=1;i<a;i++){
        if(a==i*i){
            ans=0;
            break; } }
    if(i==a)
    ans=1;
    return ans; }
int main() {
	int n;
	scanf("%d",&n);
	int i,j,count,div[100],k,sum;
	sum=0;
	count=0;
	j=0;
	for(i=1;i<n;i++) {
	    if(n%i==0 && n/i!=i){
	        count++;
	        div[j]=i;
	        j++; } }
	for(k=0;k<count;k++){
	    sum=sum+div[k]; }
	if(sum==n){
	    printf("YES"); }
	else{
	    printf("NO"); }
	return 0; }