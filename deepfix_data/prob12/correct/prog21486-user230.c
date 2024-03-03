#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[2*n];
    int count[n],i,j,k,min;
    for(i=0;i<2*n;i++) {
        scanf("%d",&arr[i]); }
    for(j=0;j<n;j++) {
        count[j]=1;
        for(k=j+1;k<2*n;k++) {
              if(arr[j]!=arr[k])
                  count[j]++;
              else
                    break; } }
    min=count[0];
    for(i=1;i<n;i++) {
        if(count[i]<min)
            min=count[i]; }
    printf("\n%d",min);
    return 0; }