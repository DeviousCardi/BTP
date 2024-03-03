#include <stdio.h>
#include <stdlib.h>
int cat(int n){
if(n==0){
return 1;}
else{
return cat(n-1)*(((2*n-2)*(2*n-3))/(n*(n-1)));}}
int main() {
    int t,m,i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++){
        scanf("%d\n",&m);
        printf("%d\n",cat(m)); }
	return 0; }