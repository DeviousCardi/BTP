#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,temp,c=1;
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++){
	    scanf("%d\n",&arr[i]); }
	scanf("%d",&b);
	int brr[b];
	for(int i=0;i<b;i++){
	    scanf("%d\n",&brr[i]); }
	temp=arr[0];
	for(int i=0;i<a;i++){
	    if(temp!=brr[i]){
	        if(temp>arr[i]){
	            temp=arr[i]; } }
	for(int i=0;i<b;i++){
	    if(temp==brr[i]){
	        c=0; } }
	if(c==1){
	    printf("%d",temp); }
	else{
	    printf("NO"); }
	return 0; }