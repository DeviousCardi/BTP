#include <stdio.h>
int main() {
    int i,j,max,min,n,temp;
    int w[999];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&w[i]); }
    max=min=w[0];
    for(i=0;i<n;i++){
        if(w[i]>max) max=w[i]; }
    for(j=0;j<n;j++){
        if(w[j]<min) min=w[j]; }
    for(j=0;j<n;j++){
        if(w[j]=max) w[j]=min;
        else if(w[j]=min) w[j]=max; }
    printf("end");
    return 0; }