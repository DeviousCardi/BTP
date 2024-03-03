#include<stdio.h>
int main() {
    int cols,rows,i,j,max,min;
    scanf("%d %d",&cols,&rows);
    int colentry[cols];
    for(i=0;i<rows;i++) {
        scanf("%d",&colentry[0]);
        max=colentry[0];
        for(j=1;j<cols;j++) {
            scanf("%d",&colentry[j]);
            if(colentry[j]>max)
            max=colentry[j]; }
        if(i==0)
        min=max;
        else
        if(min>max)
        min=max; }
    printf("%d",min);
    return 0; }