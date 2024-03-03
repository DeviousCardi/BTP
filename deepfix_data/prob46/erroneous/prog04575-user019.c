#include <stdio.h>
int main(){
    int m,n,i,count=0,d;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=2;i<n;i++) {
        d=n%i;
        if(d==0) {
        count=count+1; } }
    if(count==m)
    printf("YES");
    else
    printf("NO");
    return 0; }
    return 0; }