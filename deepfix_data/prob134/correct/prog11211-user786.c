#include <stdio.h>
#include <stdlib.h>
int B(int i,int j){
    if(i<j){return 0;}
    else if(i==0&&j==0){return 1;}
    else if(j==0&&i>0){return 1;}
    else{return ( B(i-1,j) + B(i-1,j-1) );} }
void find_idx(int b){
  int i,j;
  for(i=0;i<=b;i++){
      if(i>20){return -1;}
      for(j=0;j<=b;j++){
          if(j>20){break;}
          if(B(i,j)==b)
          { printf("%d %d",i,j);} } } }
int main() {
	int b;
	scanf("%d",&b);
	find_idx(b);
	return 0; }