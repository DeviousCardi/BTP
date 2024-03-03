#include <stdio.h>
int main(){
    int n,;
    scanf("%d", &n);
    int e[400];
    for(i=0; i<2*n; i++)
      {scanf("%d",&e[i]); }
    for(j=o; j<2*n; j++)
      { for(k=0; k<2*n; K++)
             {        if((e[j]==e[k])&&(j!=k))
                      { d[e[j]]=fabs(j-k);} } }
     min=e[0];
    for(l=0; l<2*n; l++)
      { if(min>e[l])
           {min=e[l];} }
    printf("%d", min);
    return 0; }