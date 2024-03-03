#include <stdio.h>
int main() {
    int a1, a2, n , z, i;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&n);
    z=a1+a2-2;
    if(n==1)
      printf("%d",a1);
    else
        if(n==2)
          printf("%d",a2);
        else
            if(n==3)
                printf("%d",z);
            else {
                for(i=1;i<=n-3;i++) {
                    a1=a2;
                    a2=z;
                    z=a1+a2-2; }
                printf("%d", z); }
    return 0; }