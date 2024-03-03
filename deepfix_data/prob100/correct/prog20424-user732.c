#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    int j,k,max;
    scanf("%d%d",&n,&m);
    int B[m] ;
    for(j=0;j<=m;j++ )
    {scanf("%d",&B[j]); }
          int D[n];
           for(k=0;k<=n;k++)
           {scanf("%d",&D[k]) ; }
           for(k=0;k<=n;k++)
           {if(k==0)
                max =D[k];
            else {
                if(max<D[k])
                max=D[k] ;
                k=k+1 ; } }
            for(j=0;j<=n;j++){
                for(k=0;k<=m;k++)
            {scanf("%d%d",&B[j],D[k]);
            B[j]= D[k] ; }
           if(j==0)
            max=B[j] ;
           else {
               if(max<B[j])
               max=B[j] ;
               j=j+1 ; } }
   printf("%d",B[j]);
    return 0; }