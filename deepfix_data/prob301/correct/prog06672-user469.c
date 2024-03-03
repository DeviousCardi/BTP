#include <stdio.h>
#include <stdlib.h>
int maxe();
int main() {
    int A[10];
    int k,i,j,counti=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {scanf("%d\n",&A[i]);}
    for(i=0;i<k;i++){
        for(j=0;j>i;j++)
      {  if(A[i]==A[j])
     { counti=counti+1;printf("%d",counti);}
      else
       break;
    }}
	return 0; }