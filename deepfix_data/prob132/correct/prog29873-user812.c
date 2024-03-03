#include <stdio.h>
int main(){
 int n,a[100],i,j,l;
   scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        l=0;
        for(j=0;j<n;j++)
    {  if(a[i]==a[j])
                l++; }
        if(a[i]!=l)
        {printf("NO");
        return 0; } }
     printf("YES");
    return 0; }