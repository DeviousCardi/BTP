#include <stdio.h>
#include <math.h>
int main(){
    int n,i, j, k, l, min, d[n];
    scanf("%d", &n);
    int e[400];
    for(i=0; i<2*n; i++)
      {scanf("%d",&e[i]); }
    for(j=0; j<2*n; j++)
      { for(k=0; k<2*n; k++)
             {        if((e[j]==e[k])&&(j!=k))
                      { d[e[j]]=fabs(j-k);} } }
     min=e[0];
    for(l=0; l<2*n; l++)
      { if(min>e[l])
           {min=e[l];} }
    printf("%d", min);
    return 0; }