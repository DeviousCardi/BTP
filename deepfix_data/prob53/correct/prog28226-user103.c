#include<stdio.h>
 int diff(int num[], int n)
   {   int k;
       if((n-1)==0)
            return num[0];
      else
            k= diff(num, n-1)-num[n-1] ;
            return k; }
int main()
{  int i, n;
 scanf("%d", &n);
  int ans, num[n];
 for(i=0; i<n; i++)
    {scanf("%d", &num[i]); }
ans=diff(num, n);
    printf("%d", ans);
    return 0; }