#include <stdio.h>
int main() {
    int i,max,min,n,temp;
    int w[999];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&w[i]); }
    max=min=w[0];
    for(i=0;i<n;i++){
        if(w[i]>max) max=w[i]; }
    for(i=0;i<n;i++){
        if(w[i]<min) min=w[i]; }
    for(i=0;i<n;i++){
        if(w[i]==max) w[i]=min;
        else if(w[i]==min) w[i]=max; }
    for(i=0;i<n;i++){
        printf("%d ",w[i]); }
    printf("end");
    return 0; }