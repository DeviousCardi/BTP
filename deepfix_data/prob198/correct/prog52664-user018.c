#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,j,a,flag=0,min=100000;
	scanf("%d",&n1);
	int ar1[n1];
	for(i=0;i<n1;i++){
	    scanf("%d",&a);
	    ar1[i]=a; }
	scanf("%d",&n2);
	int ar2[n2];
	for(i=0;i<n2;i++){
	    scanf("%d",&a);
	    ar2[i]=a; }
	for(i=0;i<n1;i++){
	    flag=0;
	    for(j=0;j<n2;j++){
	        if (ar1[i]==ar2[j]){
	            flag=1;
	            break; } }
	    if(flag==1){
	        break; }
	    else if (ar1[i]<min){
	        min=ar1[i]; } }
	if(min==100000){
	    printf("NO"); }
	else{
	    printf("%d",min); }
	return 0; }