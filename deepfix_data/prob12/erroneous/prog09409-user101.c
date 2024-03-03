#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    intg[2*n],d=2*n;
    for(int i=0;i<2*n;i++)
        scanf("%d",&g[i]);
    for(i=0;i<2*n;i++){
        for(int j=i+1;j<2*n;j++){
            if(g[i]==g[j]){
                if(d>j-i)
                    d=j-i; } } }
    printf("%d",d);
    return 0; }