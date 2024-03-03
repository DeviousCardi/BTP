#include <stdio.h>
int main(){
    int n,a[400],b[200],min,count=0,k,i,j;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(k=0;k<2*n;k++) {
        for(j=k;j<2*n;j++) {
            if(a[k]==a[j]) {
                b[count]=j-k;
                count++; } } }
    printf("%d",count);
    min=b[0];
        for(i=1;i<count;i++)
        {if(min>b[i])
        min=b[i]; }
        printf("%d",min);
    return 0; }