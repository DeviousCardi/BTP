#include <stdio.h>
#include <stdlib.h>
int vest(int n,int m,int x,int y,int *a,int *b,int pairs[][2]){
    int i,j,t=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){if(*(b+j)==-1)continue;
            if(*(b+j)>=(*(a+i)-x) && *(b+j)<=(*(a+i)-y) ){
                pairs[t][0]=i;
                pairs[t][1]=j;
                *(b+j)=-1;
                t++;
                break; } } }
    return t; }
int main() {
    int n,m,x,y,i;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    int a[n],b[m],pairs[n][2];
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    for(i=0;i<n;i++)
        scanf("%d",b+i);
    int t=vest(n,m,x,y,a,b,pairs);
    printf("%d\n",t);
    for(i=0;i<t;i++)
        printf("%d %d\n",pairs[i][0],pairs[i][1]);
    return 0; }