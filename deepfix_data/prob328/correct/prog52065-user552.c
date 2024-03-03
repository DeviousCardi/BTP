#include <stdio.h>
#include <stdlib.h>
int f(int n){
if (n==0)
return 0;
else if(n==1)
return 1;
else
return (f(n-1)+f(n-2));}
int main() {
int i,k,a[10000];
scanf("%d",&k);
for(i=0;i<=20;i++){
    a[i]=f(i); }
for(i=0;i<=20;i++){
if (a[i]==k){
    printf("yes");
    break; }
else {
    printf("no"); } }
	return 0; }