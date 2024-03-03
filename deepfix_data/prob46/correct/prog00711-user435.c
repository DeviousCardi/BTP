#include <stdio.h>
int main(){
    int m; scanf("%d",&m);
    int n; scanf("%d",&n);
    int i,c=0;
    for (i=2;i<n;i++) {
        if(n%i!=0) continue;
        c=c+1; }
    if(c==m){printf("YES");}
    else{printf("NO");}
     return 0; }