#include <stdio.h>
int main(){
             int n,i,luck;
             scanf("%d\n%d",&luck,&n);
             int x[n];
             for(i=0;i<n;i++;)
             scanf("%d ",x[i]);
             for(i=0;i<n;i++;)
                 for(j=i+1;j<n;j++;)
                        if(x[i]+x[j]==luck) printf("lucky");
                        break;
    return 0; }