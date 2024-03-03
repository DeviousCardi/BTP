#include<stdio.h>
 int diff(int num[], int i, int n)
   {   int k;
       if(i==(n-1))
            return num[n-1];
      else
            k= num[i]-diff(num, (i+1), n);
            return k; }
int main()
{  int i, n;
 scanf("%d", &n);
  int ans, num[n];
 for(i=0; i<n; i++)
    {scanf("%d", &num[i]); }
ans=diff(num, 0, n);
    printf("%d", ans);
    return 0; }