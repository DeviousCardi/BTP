#include <stdio.h>
int main(){
            int i,m,n,count=0;
            scanf("%d %d",&m,&n);
            for(i=2;i<n;i++)
            {if(n%i==0)
              count++; }
           if(count==m)
           printf("YES");
           else
           printf("NO");
    return 0; }