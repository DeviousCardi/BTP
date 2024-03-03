#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n==0){
        return 0;
    }else{
      if(n==1){
          return 1;
      }else{
        return f(n-1)+f(n-2); } } }
int main() {
     int t,i,k;
    scanf("%d",&t);
     for(i=0;i<t;i++){
         scanf("%d",&k);
         printf("%d\n",f(k)); }
	return 0; }