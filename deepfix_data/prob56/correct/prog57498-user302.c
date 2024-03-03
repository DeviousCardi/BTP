#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i,sum=0;
    if(n==0||n==1)
    return 1;
    else{
        for(i=0;i<n;i++){
    sum=sum+catalan(i)*catalan(n-i-1);}}
    return sum; }
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
    printf("%d\n",catalan(k)); }
	return 0; }