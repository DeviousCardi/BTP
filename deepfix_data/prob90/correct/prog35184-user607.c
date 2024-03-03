#include <stdio.h>
int main(){
             int n,i,p,j,t=0,m=0,luck;
             scanf("%d\n%d",&luck,&n);
             int x[n];
             for(i=0;i<n;i++)
             scanf("%d ",&x[i]);
             for(i=0;i<n;i++)
                 {for(j=i+1;j<n;j++)
                      {  if(x[i]+x[j]==luck) {printf("lucky");break;}
                        else {t++; m++;} }
                  if(m=!n-i-1) break; }
             p=(n-1)*n/2;
              if (t==p)    printf("unlucky");
    return 0; }