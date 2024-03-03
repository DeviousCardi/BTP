#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
int num[20];
for(i=0;i<20;i++){
    scanf("%d",&num[i]); }
if((i>1)&&(i<20)){
if((num[i]<num[i+1])&&(num[i]<num[i-1])){
    printf("Yes"); }
else {
    printf("No"); } }
else {if(num[1]<num[2]||num[20]<num[n-1]){
    printf("Yes\n"); }
else{
    printf("No\n"); } }
	return 0; }