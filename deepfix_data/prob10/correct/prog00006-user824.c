#include<stdio.h>
int main() {
    int i,j,n,a[20],max=0,cnt=1;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++)
    {   cnt=1;
        for(j=i+1;j<n;j++) {
            if(a[i]<a[j])
              cnt++;
            if(a[i]==a[j])
              break;
            if(max<cnt)
              max=cnt; } }
    printf("%d",max);
    return 0; }