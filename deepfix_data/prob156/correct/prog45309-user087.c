#include <stdio.h>
int main() {
    int n,m,max,s=0,i,j,a;
    scanf("%d %d",&n,&m);
    for(j=0;j<m;j++)
               { scanf("%d",&a);
                s=s+a; }
                max=s;
    for(i=1;i<n;i++) {
            {   s=0;
                for(j=0;j<m;j++)
                scanf("%d",&a);
                s=s+a;
            };
            if(max<=s)
            max=s; }
    printf("%d",max);
    return 0; }