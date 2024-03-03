#include <stdio.h>
int main(){
    int n,m;
    int i;
    int count=0;
    scanf("%d",m);
    scanf("%d",n);
    for(i=2;i<n;i++){
        if(n%i==0) count=count+1;
        else continue; }
    if(count==m) printf("YES");
    else printf("NO");
    return 0; }