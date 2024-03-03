#include <stdio.h>
int main() {
    int m,n;
    scanf("%d %d", &m, &n);
    int count=0;
    int i=2;
     while(i*i<=n) {
      if (n%i!=0)
      {i++;
       continue;}
      else
       {count++;
        i++;} }
     if((i-1)*(i-1)==n)
     m == 2*count-1;
     else if((m==2*count)&&((i-1)*(i-1)!=n))
       {printf("YES");}
     else
       {printf("NO");}
       printf("%d\n",count);
    return 0; }