#include <stdio.h>
int main() {
    int a1, a2, n, x, y , z, i;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&n);
    x=a1;
    y=a2;
    if(n==1)
      printf("%d",a1);
    else
        if(n==2)
          printf("%d",a2);
        else
            if(n==3)
                printf("%d",x+y-2);
            else
                for(i=1;i<=n-3;i++) {
                    x=y;
                    y=z;
                    z=x+y-2; }
    printf("%d", z);
    return 0; }