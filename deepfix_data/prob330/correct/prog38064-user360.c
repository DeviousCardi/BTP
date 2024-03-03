#include <stdio.h>
int main(){
    int n, peak[100],i,p_c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&peak[i]);
    p_c=0;
    for(i=1;i<n-1;i++) {
        if(peak[i]>peak[i-1] && peak[i]>peak[i+1])
          p_c++; }
    printf("%d",p_c);
    return 0; }