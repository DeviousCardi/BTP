#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)
    return 1;
  else
  return 0; }
int main() {
int a,i,b,k;
scanf("%d",&a);
for(i=0;i<a;i++){
    scanf("%d",&b);
    for(k=0;k<100;k++){
        if(catalan(k)>b){
        break;}
        else{
        continue;} }
    printf("%d",catalan(k)); }
	return 0; }