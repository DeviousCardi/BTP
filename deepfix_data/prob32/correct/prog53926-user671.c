#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
scanf("%d",&n);
int num[n];
for(i=0;i<n;i++){
    scanf("%d",&num[i]); }
if((i>1)&&(i<n)){
if((num[i]<num[i+1])&&(num[i]<num[i-1])){
    printf("Yes"); }
else {
    printf("No"); } }
else {if(num[1]<num[2]||num[n]<num[n-1]){
    printf("Yes\n"); }
else{
    printf("No\n"); } }
	return 0; }