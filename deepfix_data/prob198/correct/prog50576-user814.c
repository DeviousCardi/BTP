#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,j,t;
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
    for(i=0;i<n2;i++){
        for(j=i+1;j<n1;j++){
            if(a2[i]>a2[j]){
                t=a2[i];
                a2[i]=a2[j];
                a2[j]=t; } } }
    for(i=0;i<n1;i++)
    printf("%d",a1[i]);
    for(i=0;i<n2;i++)
    printf("%d",a2[i]);
	return 0; }