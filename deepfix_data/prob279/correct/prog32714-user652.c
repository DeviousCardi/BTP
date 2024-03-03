#include <stdio.h>
int main() {
    int n,i;
        scanf("%d",&n);
    int a[100];
        for(i=0;i<n;i++)
           scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
            int j;
            for(j=i+1;j<n+1;j++)
               if(a[i]==a[j]) {
                    printf("%d\n",a[i]);
                    break; } }
     for(i=1;i<n+1;i++) {
             int j;
             for(j=0;j<n;j++) {
                 if(i==a[j])
                  continue; }
          printf("%d",i); }
    return 0; }