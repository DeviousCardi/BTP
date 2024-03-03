#include <stdio.h>
int main(){
            int n,i,j;
            scanf("%d\n",&n);
            int room[n], count[200];
            for(i=0;i<n;i++)
              scanf("%d ",&room[i]);
            for(j=1;j<=2*n;j+2) {
                  count[j]=j;
                  count[j+1]=room[j]; }
             for(i=1;i<=2*n;i++) {
                  if(count[i]==count[i+1])
                        for(i+1;i<=2*n;i++)
                            count[i+1]=count[i+2]; }
    return 0; }