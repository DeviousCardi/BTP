#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,element,maxrow=INT_MIN,minarr=INT_MAX;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&element);
            if(maxrow<=element) {
                maxrow=element; } }
        if(minarr>=maxrow) {
            minarr=maxrow; }
        maxrow=INT_MIN; }
    if(n!=0) {
        printf("%d\n",minarr); }
    else {
        return 0; }
    return 0; }