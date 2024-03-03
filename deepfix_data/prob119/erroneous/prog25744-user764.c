#include <stdio.h>
#include <stdlib.h>
  int moves(int a)
int main() {
	int n,i,j,b;
	scanf("%d",&n);
      for(i=1;i<n+1;i=i+1){
          scanf("%d",&j);
          b=moves(j-1)+1;
          print("%d\n",b); }
	return 0; }
int moves(int a) {
        if(n==0){
            return 0; }
        else {
            return(2*(n-1)); } }