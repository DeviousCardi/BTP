#include <stdio.h>
#include <stdlib.h>
int cat(int n){
if(n==0){
return 0;}
else{
return (((2*n)*(2*n-1))/(n*(n+1)))*cat(n-1);}}
int main() {
    int t;
    scanf("%d\n",&t);
    int m,i;
    for(i=0;i<t;i++){
        scanf("%d\n",m);
        printf("%d\n",cat(m)); }
	return 0; }