#include <stdio.h>
int main(){
    int n,m,k=0,i;
    scanf("%d%d",&n,&m);
    for(i=2;i<n;i++){
        if(n%i==0)
        {k++;}}
        if(k==m){
            printf("YES");}
            else {printf("NO");}
    return 0; }