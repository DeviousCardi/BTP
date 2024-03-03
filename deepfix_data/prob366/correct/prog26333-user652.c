#include <stdio.h>
int main() {
   int n;
     scanf("%d",&n);
   int i,num[400];
     for(i=0;i<2*n;i++)  scanf("%d",&num[i]);
   int min=400;
     for(i=0;i<n;i++) {
            for(int j=0;j<(2*n-1);j++)
                { int t;
                    if(num[i]==num[j])
                    t=(j-i);
                    if(t<=min) min=t;
                     t=0; } }
     printf("%d",min);
    return 0; }