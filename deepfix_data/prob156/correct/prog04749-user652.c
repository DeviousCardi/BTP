#include <stdio.h>
int main() {
    int n,m,a,sum,max=0;
        scanf("%d %d",&n,&m);
    int i;
        for(i=1;i<n+1;i++)
           {sum=0;
                int j;
                for(j=1;j<m+1;j++) {
                    scanf("%d",&a);
                    sum=sum+a; }
           if(max<sum)
                 max=sum; }
      printf("%d",max);
    return 0; }