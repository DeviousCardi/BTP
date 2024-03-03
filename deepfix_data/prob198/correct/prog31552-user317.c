#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
	int n1,n2,a[20],b[20];
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&n2);
	for(int i=0;i<n2;i++){
	    scanf("%d",&b[i]);
	    for(int j=0;j<n1;j++){
	        if(a[j]==b[i]) {
	       a[j]=INT_MAX;
	        break; } } }
for(int i=0;i<n1;i++){
	for(int j=i;j<n1;j++){
	    if(a[i]>a[j]){
	        int k=a[i];
	        a[i]=a[j];
	        a[j]=k; } } }
	for(int i=0;i<n1;i++){
	    if(a[i]!=INT_MAX){
	        printf("%d",a[i]);
	        break; } }
	return 0; }