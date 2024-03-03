#include <stdio.h>
int main() {
    int i,j,n,x[400],count=400;
        scanf("%d",&n);
        for(i=0;i<2*n;i++)
        scanf("%d",&x[i]);
        for(i=0;i<n;i++)
            for(j=i+1;j<2*n;j++)
                if(x[i]==x[j])
                    if((j-i)<count)
                        count=j-i;
        printf("%d",count);
    return 0; }