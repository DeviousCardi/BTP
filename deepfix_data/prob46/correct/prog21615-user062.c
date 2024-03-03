#include <stdio.h>
int main(){
    int m,n,k=0,i;
    scanf("%d %d",&m,&n);
    for(i=2;i<n;i++){
        if(n%i==0)
        k=k+1;}
        if(k==m){
            printf("YES");}
            else {printf("NO");}
    return 0; }