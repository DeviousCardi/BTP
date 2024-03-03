#include <stdio.h>
int main() {
   int n,t;
     scanf("%d",&n);
   int i,num[400];
     for(i=0;i<2*n;i++)  scanf("%d",&num[i]);
   int min=400;
     for(i=0;i<(2*n-2);i++) {
            for(int j=i+1;j<=(2*n-1);j++) {
                    if(num[i]==num[j])
                         t=(j-i);
                    else t=min; }
       if(t<=min) min=t;
       t=0; }
     printf("%d",min);
    return 0; }