#include <stdio.h>
int main() {
	int n1,x;
	scanf("%d",&n1);
	int a1[20];
	for(int i=0;i<n1;i++){
	    scanf("%d",&a1[i]); }
	int n2;
	scanf("%d",&n2);
	int a2[20];
	for(int i=0;i<n2;i++){
	    scanf("%d",&a2[i]); }
	for(int i=0;i<n1;i++){
	    for(int j=i;j<n1;j++){
	        if(a1[i]>a1[j]){
	            x=a1[i];
	            a1[i]=a1[j];
	            a1[j]=x; } } }
	for(int i=0;i<n1;i++){
	    printf("%d ",&a1[i]); }
	return 0; }