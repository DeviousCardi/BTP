#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int min=((2*n)-1);
    int i,j,m;
    for(i=0;i<2n;i++){
    scanf("%d",&m);
    a[i]=m; }
    for(i=0;i<2n;i++){
        for(j=i+1;j<2n;j++){
            if(a[i]==a[j]){
                diff=j-i;
                if(min>diff) min=diff; } } }
    printf("%d",min);
    return 0; }