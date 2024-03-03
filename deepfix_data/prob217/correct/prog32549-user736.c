#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
int n,i,s,j,k,a[n];
scanf("%d\n",&n);
if(n>0&&n<pow(10,4))
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
scanf("%d",&s);
if(s<pow(10,5)&&s>pow((-10),5))
for(k=0;k<n;k++){
for(j=0;j<n;j++){
    if(a[k]+a[j]==s){
        printf("(%d,%d)\n",a[k],a[j]);} } }
	return 0; }