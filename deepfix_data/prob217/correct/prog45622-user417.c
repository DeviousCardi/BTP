#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,N,S;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++) {
         scanf("%d",&arr[i]);
         scanf("%d",&S);
         for(j=0;j<N;j++) {
              for(k=0;k<N;k++) {
                 int h;
                 if(j!=k) {
                    h=arr[j]+arr[k];
                    if(h==S)  {
                    printf("(%d,%d)\n",j,k);  }
                    else continue; }
                    else
                    continue; } } }
	return 0; }