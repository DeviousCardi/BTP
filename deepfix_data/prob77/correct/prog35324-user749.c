#include <stdio.h>
int main() {
    int i,j,max,min,n;
    int w[999];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&w[i]); }
    max=min=w[0];
    for(i=0;i<n-1;i++){
        if(w[i+1]>w[i]) max=w[i+1]; }
    for(j=0;j<n-1;j++){
        if(w[j+1]<w[j]) min=w[j+1];
        printf("%d ",w[j+1]<w[j]); }
    printf("%d %d ",max,min);
    printf("end");
    return 0; }