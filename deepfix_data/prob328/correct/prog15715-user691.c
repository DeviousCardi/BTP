#include <stdio.h>
#include <stdlib.h>
 int fi(int n) {
              if(n<=0)
          return -1;
          if (n==1)
          return 0;
          if(n==2)
          return 1;
          return fi(n-1)+fi(n-2); }
int main() {
    int i,k,t;
    scanf ("%d",&t);
        for (i=0;i<t;i++) {
            scanf("%d",&k);
        if (k==fi(k))
            printf("yes");
                else
            printf ("no"); }
            return 0; }