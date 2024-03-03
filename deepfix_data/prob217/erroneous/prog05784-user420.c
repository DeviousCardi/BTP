#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i,j,l,ch;
    long int t[N],S;
    scanf("%d",&N);
  for(l=0;l<n;l++) {
      scanf("%ld",&t[l]); }
    scanf("%ld",&S);
    for(i=0;i<N;i++) {
      for(j=i+1;j<N;j++) {
          if(t[i]+t[j]==S)
          printf("(%ld,%ld)\n",t[i],t[j]); } }
	return 0; }