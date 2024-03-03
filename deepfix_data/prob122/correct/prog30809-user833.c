#include <stdio.h>
int main(){
    int n;
    int i, j;
    int row, count1=0, count2=0;
    scanf("%d\n", &n);
    for(j=1; j<=n; j++){
        for(i=1; i<=n; i++){
            scanf("%d ", &row);
            if (i==j){
                if (row==1)
                count1++; }
            else if (i!=j){
                if(row==0)
                count2++; } } }
    if (count1==n && count2==(n*n)-n)
    printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX");
    else
    printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX");
    return 0; }