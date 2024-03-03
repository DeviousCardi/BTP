#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m,x,y,i,j,count=0,t=0;
    scanf("%d%d%d%d",&n,&w,&x,&y);
    int *a,*b;
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    b=(int*)malloc(w*sizeof(int));
    for(j=0;j<w;j++) {
        scanf("%d",&b[j]); }
    for(i=0;i<mw;i++) {
        for(j=0;j<n;j++) {
            if((a[j]-x<=b[i])&&(b[i]<=a[j]+y)) {
                count++;
                break; } } }
    printf("%d\n",count);
    for(i=0;i<w;i++) {
        for(j=t;j<n;j++) {
            if((a[j]-x)<=b[i]&&(b[i]<=a[j]+y)) {
                printf("%d %d\n",j+1,i+1);
                t=j+1;break; } } }
    return 0; }