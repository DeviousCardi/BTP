#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,j,t,flag;
	scanf("%d\n",&n1);
	int a1[n1];
	for(i=0;i<n1;i++) {
	    scanf("%d\n",&a1[i]); }
	scanf("%d\n",&n2);
	int a2[n2];
	for(i=0;i<n2;i++) {
	    scanf("%d\n",&a2[i]); }
    for(i=0;i<n1;i++){
        for(j=i+1;j<n1;j++){
            if(a1[i]>a1[j]){
                t=a1[i];
                a1[i]=a1[j];
                a1[j]=t; } } }
   for(i=0,j=0;i<n2;i++){
       flag=1;
       if(a2[j]==a1[i]){
           flag=0;
           j++;
           i=-1; }
       if(j==n1){
           printf("No");
           break; } }
    if(flag==1){
        printf("%d",&a1[j]); }
	return 0; }