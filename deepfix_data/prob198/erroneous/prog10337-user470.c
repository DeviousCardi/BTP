#include <stdio.h>
int main() {
	int n1;
	scanf("%d",n1);
	int a1[20];
	for(int i=0;i<n1;i++){
	    scanf("%d",&a1[i]); }
	int n2;
	scanf("%d",&n2);
	int a2[20];
	for(int i=0;i<n2;i++){
	    scanf("%d",&a2[i]); }
	for(int i=0;i<n1;i++){
	    for(int j=0;j<n1;j++){
	        if(a[i]>a[j]){
	            x=a[i];
	            a[i]=a[j];
	            a[j]=x; } } }
	for(int i=0;i<n1;i++){
	    printf("%d",&a1[i]); }
	return 0; }