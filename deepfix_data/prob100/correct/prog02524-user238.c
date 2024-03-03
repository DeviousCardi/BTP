#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,max,unit,min;
    scanf("%d %d\n",&n,&m);
    int maxl[m];
    for(int i=0;i<m;i++) {
        max=scanf("%d",&max);
        for(int j=1;j<n;j++) {
            scanf("%d",&unit);
            if(max<unit)
            max=unit; }
        printf("%d",max);
        maxl[i]=max; }
    min=maxl[0];
    for(int i=1;i<m;i++) {
        if(maxl[i]<min)
        min=maxl[i]; }
    printf("%d",min);
    return 0; }