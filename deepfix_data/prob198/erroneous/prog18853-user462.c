#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1[20],n2[20];
	int n,m,i,j,min;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",n1[i]); }
	scanf("%d",&m);
	for(j=0;j<m;j++){
	    scanf("%d",n2[j]); }
	min=n1[0];
	for(i=1;i<n;i++){
	    if(n1[0]<n1[i]){
	        min=n1[0]; }
	    else{
	        min=n1[i]; } }
	for(j=0;j<m;j++){
	    if(min==n2[j]){
	        printf("NO");
	        break; }
	    else if()
	    else{
	        printf("%d",min); } }
	return 0; }