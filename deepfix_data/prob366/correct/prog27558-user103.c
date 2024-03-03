#include <stdio.h>
#include <math.h>
int main(){
    int n,i, j, k, l, min;
    scanf("%d", &n);
    int e[400], d[n];
    for(i=0; i<2*n; i++)
      {scanf("%d",&e[i]); }
    for(j=0; j<2*n; j++)
      { for(k=0; k<2*n; k++)
             {        if((e[j]==e[k])&&(j!=k))
                      { d[j]=fabs(j-k);} } }
     min=d[0];
    for(l=1; l<n; l++)
      { if(min>d[l])
           {min=d[l];} }
    printf("%d", min);
    return 0; }