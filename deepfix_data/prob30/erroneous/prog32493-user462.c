#include <stdio.h>
int a[100]={0};
int n,i;
int getMaxLessThan(int upperLimit) {
    upperLimit=a[0];
    for(i=1;i<n;i++){
        if(a[0]<a[i]){
            upperLimit=a[i]; }
        else{
            upperLimit=a[0]; } }
    return upperLimit; }
int main() {
    int n,k,a[100],i,j,b[100],upperLimit,getMaxLessThan;
    scanf("%d %d",&n,&k);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    upperLimit=b[0];
    for(j=1;j<k;j++){
        getMaxLessThan=b[j] }
    printf("%d",b[j]);
    return 0; }