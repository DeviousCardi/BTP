#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,a;
    int rowindex,colindex;
    int rowmax=0,min_of_max;
    scanf("%d%d\n",&n,&m);
    for(rowindex=0;rowindex<m;rowindex++){
        for(colindex=0;colindex<n;colindex++){
            scanf("%d",&a);
            if(rowmax<a){
                rowmax=a; } }
        if(rowindex==0)
        min_of_max=rowmax;
        else {
            if(min_of_max>rowmax)
            min_of_max=rowmax; } }
    printf("%d",min_of_max);
    return 0; }