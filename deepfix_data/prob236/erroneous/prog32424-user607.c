#include <stdio.h>
int main()
         { int n,i,j,k;
         scanf("%d",&n);
         int x[n];
         int z[n];
         for(i=0;i<=3;i++)
            scanf("%d ",&x[i]);
         for(i=0;i<=3;i++)
            scanf("%d ",&z[i]);
         for(i=0;i<=3;i++)
           { for(j=i+1;j<=3;j++)
             {if(z[i]>z[j])   {e=z[i];
                               z[i]=z[j];
                               z[j]=e;
                               f=x[i];
                               x[i]=x[j];
                               x[j]=f; } } }
         for(i=0;i<=3;i++)
            printf("%d ",x[i]);
    printf("end");
    return 0; }