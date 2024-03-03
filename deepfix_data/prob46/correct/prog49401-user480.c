#include <stdio.h>
int main() {
    int m,n;
    scanf("%d %d", &m, &n);
    int i=1;
    int count=0;
     while(i*i<n) {
      if (n%i!=0)
      {i++;
       continue;}
      else
       {count++;
        i++;} }
      if(m==2*count-2)
       {printf("YES");}
      else if(i*i==n && m==2*count-3)
       {printf("YES");}
      else
       {printf("NO");}
    return 0; }