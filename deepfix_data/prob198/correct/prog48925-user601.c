#include <stdio.h>
#include <stdlib.h>
int main() {
int n1,n2,i,j,k=0,c,min=0;
int a1[20];
int a2[20];
int b[20];
scanf("%d\n",&n1);
for(i=0;i<n1;i++) {
    scanf("%d",&a1[i]); }
scanf("%d\n",&n2);
for(i=0;i<n2;i++) {
    scanf("%d",&a2[i]); }
for(i=0;i<n1;i++) {
    for(j=0;j<n2;j++) {
        if(a1[i]!=a2[j]) {
           b[k]=a1[i];
           k++; } } }
for(i=0;i<k;i++) {
    c=b[k];
    if(min>b[k]){min=b[k]; }
printf("%d",min);
	return 0;
}}