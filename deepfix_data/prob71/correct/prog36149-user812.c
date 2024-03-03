#include <stdio.h>
int main() {
    int N,a[1000],c,d,tmp;
    float x;
    scanf("%d\n",&N);
      for(int i=0;i<N;i++) {
          scanf("%d",&a[i]); }
        for(d=0;d<N ;d++)
         {for( int j=d;j<N;j++)
              if(a[d]>a[j]) {
                  tmp=a[d];
                  a[d]=a[j];
                  a[j]=tmp; } }
           if(N%2==0)
           {  x=(a[(N/2 -1)] + a[(N)/2])/2.0 ;
               printf("%.1f",x); }
                else
                   printf("%f",a[(N)/2]);
    return 0; }