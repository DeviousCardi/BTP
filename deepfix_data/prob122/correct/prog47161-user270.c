#include <stdio.h>
int main(){
int n,i,j,x;
scanf("%d",&n);
for (j=1; j<=n; j++) {
        for (i=1; i<=n; i++)
        { scanf("%d",&x);
            if  (( i !=j ) && (x==0) ) continue;
            else if ((i=j)&&(x==1)) continue;
            else {printf("no");
                  break;} } }
    printf("yes");
    return 0; }