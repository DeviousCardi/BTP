#include<stdio.h>
#include<limits.h>
int main() {
    int m,n;
    scanf("%d%d",&n,&m);
    int min=INT_MAX;
    for(int i=0;i<m;i++){
        int row_max=INT_MIN;
        for(int j=0;j<n;j++){
            int temp;
            scanf("%d",&temp);
            if(temp>row_max)
                row_max=temp; }
        if(min>row_max)
            min=row_max; }
    printf("%d",min);
    return 0; }