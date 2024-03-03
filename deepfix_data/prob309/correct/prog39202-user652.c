#include <stdio.h>
int main() {
    int n,i,t=1;
        scanf("%d",&n);
    int a[100];
        for(i=0;i<n;i++)
             scanf("%d",&a[i]);
     for(i=0;i<n;i++) {
             int j;
             for(j=i+1;j<n;j++) {
                 if(a[i]==a[j])
                 t=t+1; }
     if(a[i]==t)
        printf("Yes");
      if(a[i]!=t)
        printf("No"); }
    return 0; }