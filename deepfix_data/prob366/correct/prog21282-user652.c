#include <stdio.h>
int main() {
   int n,t;
     scanf("%d",&n);
   int i,num[400];
     for(i=0;i<2*n;i++)  scanf("%d",&num[i]);
   int min=400;
     for(i=0;i<n;i++) {
            for(int j=0;j<(2*n-1);j++)
                {  t=0;
                    if(num[i]==num[j])
                     t=(j-i);
                    if(t>=min) min=t; } }
     printf("%d",min);
    return 0; }