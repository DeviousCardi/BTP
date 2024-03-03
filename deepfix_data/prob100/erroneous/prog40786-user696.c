#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    int rowindex,colindex;
    int rowmax=0,min_of_max=0;
    scanf("%d%d",&n,&m);
    for(rowindex=0;rowindex<m;rowindex++){
        for(colindex=0;colindex<n;coindex++){
            scanf("%d",&a);
            if(rowmax<a){
                rowmax=a; } }
        if(min_of_max>rowmax){
            min_of_max=rowmax; } }
    printf("%d",min_of_max);
    return 0; }