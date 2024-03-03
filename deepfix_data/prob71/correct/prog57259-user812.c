#include <stdio.h>
int main() {
    int N,a[1000],c,d,tmp;
    float x;
    scanf("%d\n",&N);
      for(int i=0;i<N;i++) {
          scanf("%d",&a[i]); }
        for(c=0;c<(N-1) ;c++)
           {  for(d=0;d<=N-c-1;d++)
              if(a[d]>a[d+1]) {
                  tmp=a[d];
                  a[d]=a[d+1];
                  a[d+1]=tmp; } }
           for(int i=0;i<N;i++)
           printf("%d\n",a[i]);
           if(N%2==0)
           {  x=(a[(N/2 -1)] + a[(N)/2])/2.0 ;
               printf("%.1f",x); }
                else
                   printf("%.1f",a[(N)/2]);
    return 0; }