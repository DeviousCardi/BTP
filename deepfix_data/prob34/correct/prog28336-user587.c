#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,t,a[20],b[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&b[i]);
	    if(b[i]==0){
	        if(a[b[i]]>a[b[i+1]]){
	            printf("Yes");}
	            else{
	            printf("No");} }
	        else if(b[i]==0){
	        if(a[b[i]]>a[b[i-1]]){
	            printf("Yes");}
	            else{
	            printf("No");}}
	       else{
	        if((a[b[i]]>a[b[i+1]])&&(a[b[i]]>a[b[i-1]])){
	            printf("Yes");}
	            else{
	            printf("No");} } }
	return 0; }