#include <stdio.h>
int main(){
int n,i,j,x;
scanf("%d",&n);
for (j=1; j<=n; j++) {
        for (i=1; i<=n; i++)
        { scanf("%d",&x);
            if  ( ((i<j)||((i<n)&&(i>j)) ) && (x==0) ) continue;
            if ((i=j)&&(x==0)) continue;
            printf("no");
            break; } }
    return 0; }