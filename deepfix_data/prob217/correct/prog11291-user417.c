#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,S,j,k,N,h;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++) {
          scanf("%d",&arr[i]); }
          scanf("%d",&S);
         for(j=1;j<=N;j++) {
              for(k=0;k<N-1;k++) {
                 if(j!=k) {
                    h=arr[j]+arr[k];
                    if(h==S)  {
                    printf("(%d,%d)\n",arr[j],arr[k]);  }
                    else
                    continue; }
                    else
                    continue; } }
	return 0; }