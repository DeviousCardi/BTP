#include <stdio.h>
#include <stdlib.h>
  int fibo(int n){
      if(n==1){
    return 0; }
      else if(n==2){
       return 1; }
      else{
          return fibo(n-1)+fibo(n-2); } }
int main() {
    int m,i;
    int s[20];
	scanf("%d",&m);
	for(i=0;i<m;i++){
	  scanf("%c",&s);}
	  for(i=0;i<m;i++){
	  printf("%d\n",fibo(s[i])); }
	return 0; }