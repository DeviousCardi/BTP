#include <stdio.h>
#include <stdlib.h>
int main(){
   int n,i,j,k,count;count=0;
scanf("%d\n",&n);
int a[10000];
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
for(k=0;k<n;k++){
for(j=k+1;j<n;j++){
    if(a[k]==a[j]){
        count=count+1; }
    else{count=count;} } }
if(count>0){
    printf("%d",a[k]); }
	return 0; }