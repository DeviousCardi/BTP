#include <stdio.h>
#include <stdlib.h>
int main() {
    int N,i,j,l;
    long int t[N],S;
    scanf("%d\n",&N);
 for(l=0;l<N;l++) {
      scanf("%ld",&t[l]); }
    scanf("%ld\n",&S);
    for(i=0;i<N;i++) {
      for(j=i+1;j<N;j++) {
          if(t[i]+t[j]==S)
          printf("%ld",t[i]); } }
	return 0; }