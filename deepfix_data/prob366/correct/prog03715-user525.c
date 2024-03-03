#include <stdio.h>
int a[400];
int min(int i, int j) {
    int c=0;
        for(int j=i+1;j<400;j++)
        {    c=c+1;
            if(a[j]==a[i])
          return c; } }
int main(){
     int n;
     int lmin=100;
     int i,j;
     scanf("%d",&n);
     for(i=0;i<2*n;i++)
     scanf("%d",&a[i]);
     for(i=0;i<2*n-1;i++) {
     int l=min(i,j);
     printf("%d",l);
     if(l<lmin)
     lmin=l; }
    printf("%d",lmin);
    return 0; }