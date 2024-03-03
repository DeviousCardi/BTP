#include <stdio.h>
#include <stdlib.h>
int main()
{ int sz,arr[20],c1,c2,c3;
  scanf("%d", &sz);
  for(c1=0;c1<sz;c1++)
  scanf("%d", &arr[c1]);
  for(c2=0;c2<sz;c2++) {
      for(c3=(c2+1);c3<sz;c3++) {
          if(arr[c3]==arr[c2]) {
              printf("YES\n");
              break; } }
      if(arr[c3]==arr[c2])
      break; }
  if(c2==sz)
  printf("NO\n"); }