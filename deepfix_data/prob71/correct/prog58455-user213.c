#include <stdio.h>
int find_idx_max(int a[],int start, int end)
  {int count=0;
  int temp=a[0];
      for(int i=start+1;i<end;i++)
      {if(a[i]>temp)
        temp=a[i];
        count=i; }
      return count; }
 void swap(int a[],int i,int j)
  { int tmp;
tmp = a[i];
a[i] = a[j];
a[j] = tmp; }
void selection_sort(int a[],int start,int end) {
if (start == end)
return;
int idx_max = find_idx_max(a, start, end);
swap(a, idx_max, start);
selection_sort(a, start+1, end); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   selection_sort(a,0,n-1);
   if(n%2==0)
 {  float x=0.0;
    x=(a[n/2]+a[(n/2)-1])/2;
   printf("%f",x);
  } else
   printf("%d",a[(n-1)/2]);
   return 0; }