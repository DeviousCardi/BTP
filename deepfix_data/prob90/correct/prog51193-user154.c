#include <stdio.h>
int main(){
    int a[1000];
    int k,n,i,j,f,l,o,count=0,c=0,r=0;
       scanf("%d\n%d\n", &k,&n);
    for (i=0;i<n;i++) {
          scanf("%d", &a[i]); }
    for(j=0;j<n;j++) {
        l=a[j];
        o=k-a[j];
        for (f=0;f<n;f++) {
          if (l==(a[f]))
          count++;
          if (o==(a[f]))
          c++; }
        if ((c>0)&&(count>0))
         r++; }
    if(r>0)
      printf("lucky");
    else
      printf("unlucky");
    return 0; }