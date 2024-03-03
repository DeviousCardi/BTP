#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1;
	scanf("%d",&n1);
	int a[n1],i;
	for(i=0;i<n1;i++){
	    scanf("%d",&a[i]); }
	int n2;
	scanf("%d",&n2);
	int b[n2],j;
	for(j=0;j<n2;j++){
	    scanf("%d",&b[j]); }
	int count=0;
	i=0;
	while(i<n1){
	    for(j=0;j<n2;j++){
	        if(a[i]==b[j]){
	            break; }
	        if(j==n2)
	        count++; } }
	int c[count],k=0;
	i=0;
	while(i<n1){
	    for(j=0;j<n2;j++){
	        if(a[i]==b[j]){
	            break; }
	        if(j==n2){
	            c[k]=a[i];
	            k++; } } }
	int min=c[0];
	for(i=0;i<count;i++){
	    if(a[i]<min){
	        min=a[i]; } }
	printf("%d",min);
	return 0; }