#include<stdio.h>
int main() {
    int cols,rows,i,j,row_n,col_n,max,min;
    scanf("%d %d",&cols,&rows);
    int rowentry[cols];
    for(i=0;i<rows;i++) {
        scanf("%d",&rowentry[0]);
        max=rowentry[0];
        for(j=1;j<cols;j++) {
            scanf("%d",&rowentry[j]);
            if(rowentry[j]>max)
            max=rowentry[j]; }
        if(i==0)
        min=max;
        else
        if(min>max)
        min=max; }
    printf("%d",min);
    return 0; }