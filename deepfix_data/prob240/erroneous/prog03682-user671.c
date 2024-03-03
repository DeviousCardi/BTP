#include <stdio.h>
#include <stdlib.h>
 int catlan(n){
     if(n=0)return 1;
     return 4*catlan(n-1)-(6.0*catlan(n-1))/(n+1) }
int main() {
int i,n,d;
scanf("%d",&n);
for (i=0;i<n;i++){
    scanf("%d",&d);
    for (j=0;j<1000;j++){
        if (catlan(j)>=d){printf("%d\n",catlan(j-1));break;} } }
	return 0; }