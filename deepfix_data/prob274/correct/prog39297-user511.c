#include <stdio.h>
int main() {
    int n,i,j,count=0,t,tmin=200,k;
    scanf("%d",&n);
    int mat[n],mat2[500];
    for(i=0;i<n;i++) {
        scanf("%d",&mat[i]); }
    mat2[0]=1;
    mat2[1]=mat[0];
    for(i=0;i<200;i++) {
        mat2[i+2]=mat[mat2[i+1]-1];
        count=0; }
    for(j=0;j<n;j++) {
        for(k=0;k<200;k++) {
            t=0;
            if(mat2[j]==mat2[k]) {
                t=t+1;
                break; } }
        if(tmin>t) {
            tmin=tmin+t;
            t=tmin-t;
            tmin=tmin-t; } }
    printf("%d",tmin);
    return 0; }