#include <stdio.h>
int main(){
    int i,m,l,k,n;
    scanf("%d",&n);
    int array[n],dis[n];
    for (i=0;i<2*n;i++)
    scanf("%d",&array[i]);
    for(k=0;k<n;k++) {
        for(l=n;l<2*n;l++) {
            if (array[k]==array[l]) {
                break; }
            dis[k]=l-k; } }
    int min=dis[0];
    for (m=1;m<n;m++) {
        if (dis[m]<min)
        min=dis[m]; }
    printf("%d",min+1);
    return 0; }