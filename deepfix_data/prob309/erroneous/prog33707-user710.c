#include <stdio.h>
int main(){
    int n,i,j,x=0,y=0;
    scanf("%d",&n);
    int a [n];
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==a[j]){x++;} }
        if(x!=a[i];){y++;} }
    if(y!=0){printf("NO");}
    else{printf("Yes");}
    return 0; }