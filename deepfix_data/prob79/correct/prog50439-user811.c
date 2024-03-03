#include <stdio.h>
#include <stdlib.h>
int n;
int at(int *t,int i){
    int k,sum=0;
    for(k=0;k<i;k++){
        sum = sum + t[k]; }
    return sum; }
int bt(int *t,int j){
    int k,sum=0;
    for(k=n-1;k<=n-j;k--){
        sum = sum + t[k]; }
    return sum; }
int main() {
	int i=1,j=1,a=0,b=0,*t;
	scanf("%d",&n);
	t=(int*)malloc(n*sizeof(int));
	while(i<n&&j<n){
	    if(at(t,i)<bt(t,j)){
	        if(a+b<n){
	            a++;
	            i++; }
	        else{
	            break; } }
	    else if(at(t,i)>bt(t,j)){
    	        if(a+b<n){
    	            b++;
    	            j++; }
    	        else{
    	            break; } }
	    else{
	        if(a+b<n-1){
	            a++;
	            b++;
	            i++;
	            j++; }
	        else{
	            break; } } }
    printf("%d %d",a,b);
	return 0; }