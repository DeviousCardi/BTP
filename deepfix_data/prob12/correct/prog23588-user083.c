#include <stdio.h>
int main(){
    int n,i,k,j,st,min;
    scanf("%d\n",&n);
    int gate[2*n];
    min=2*n-1;
    for(i=0;i<2*n;i++){
        scanf("%d",&gate[i]); }
    for(k=0;k<2*n;k++){
        for(j=2*n-1;j>k;j++){
            if((k!=j)&&(gate[k]==gate[j])){
            st=j-k;
            break;}
            else if(k==j)
            continue;
            else if(gate[j]!=gate[k])
            continue; }
        if(st<min)
        min=st; }
    printf("%d",min);
    return 0; }