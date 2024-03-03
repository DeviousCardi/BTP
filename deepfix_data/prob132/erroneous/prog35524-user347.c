#include <stdio.h>
int main() {
  inr n,c=1,i,d=0;
  scanf("%d",&n);
  int a[n];
 for(i=0;i<n;i++)
        scanf("%d,",&a[i]);
  for(i=0;i<n;i++) {
      if(a[0]==n+1)
      {d=1;
      break;}
     if(a[i]!=(n+1)) {
          for(j=i;j<n;j++) {
              if(a[i]==a[j])
              {c=c+1;
              a[j]=n+1;} }
          if(c==a[i])
          {c=1;
          continue;}
          else
          {d=1;
          break;} } }
    if(d==0)
    printf("Yes");
    else
    printf("No");
    return 0; }