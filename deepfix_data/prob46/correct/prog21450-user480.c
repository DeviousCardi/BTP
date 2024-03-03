#include <stdio.h>
int main() {
    int m,n;
    scanf("%d %d", &m, &n);
    int count=0;
    int i=2;
     while(i*i<n) {
      if (n%i!=0)
      {i++;
       continue;}
      else
       {count++;
        i++;} }
      if(m==2*count)
       {printf("YES");}
      else if(i*i==n && m==2*count-1)
       {printf("YES");}
      else
       {printf("NO");}
       printf("%d",count);
    return 0; }