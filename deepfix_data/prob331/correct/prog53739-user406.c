#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j;
    int a[100][100];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]); }
    int flag=1;
    for(i=0;i<n;i++) {
        if(a[i][i]==1) {
            for(j=0;j<n;j++) {
                if (i==j)
                    continue;
                if(!(a[i][j]==0)) {
                    flag=0;
                    break; } }
            if(flag == 0)
                    break; }
        else
            flag = 0; }
    if(flag==1)
    printf("GIVEN %d x %d matrix is an IDENTITY MATRIX",n,n);
    else
    printf("GIVEN %d x %d matrix is NOT a an IDENTITY MATRIX",n,n);
    return 0; }