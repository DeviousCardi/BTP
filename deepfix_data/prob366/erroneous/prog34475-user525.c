#include <stdio.h>
int min(int a[i],int a[j]) {
    int c=0;
        for(int j=i+1;j<2*n;j++)
        {    c=c+1;
            if(a[j]==a[i])
          return c; } }
int main(){
     int n;
     int lmin=100;
     int i;
     scanf("%d",&n);
     int a[2*n];
     for(i=0;i<2*n;i++)
     scanf("%d",&a[i]);
     for(i=0;i<2*n-1;i++) {
     int l=min(a[i],a[j])
     if(l<lmin)
     lmin=l; }
    printf("%d",lmin);
    return 0; }