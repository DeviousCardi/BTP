#include <stdio.h>
int main() {
    int n,m,k,sumi;
    scanf("%d%d",&n,&m);
    int gold=0;
    for(int i=0;i<n;++i) {
           sumi=0;
           for(int j=0;j<m;++j)
             {   scanf("%d",&k);
                 sumi=sumi+k; }
        if (gold<sumi)
            gold=sumi; }
    printf("%d",gold);
    return 0; }