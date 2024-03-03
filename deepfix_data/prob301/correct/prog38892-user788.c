#include <stdio.h>
#include <stdlib.h>
int main(){
   int n,i,j,count;count=0;
scanf("%d\n",&n);
int a[10000];
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
    if(a[i]==a[j]){
        count=count+1; }
    else{continue;} } }
if(count>0){
    printf("%d",a[i]); }
	return 0; }