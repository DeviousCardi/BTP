#include <stdio.h>
int main(){
    int k,i,n,a[100],sum,l;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); {
            for(l=0;l<n;l++) {
            scanf("%d",&a[l]);
            sum = 0;
            sum= a[i]+a[l];
            if(sum==k)
               {printf("lucky");}
               break; }
          if(sum!=k)
         printf("unlucky");
        break; } }
     return 0; }