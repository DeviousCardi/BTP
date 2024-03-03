#include<stdio.h>
#include<limits.h>
int main() {
    int row[1000],maxi[1000],m,n,i,j,max,min=INT_MAX;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        max=INT_MIN;
        for(j=0;j<n;j++){
            scanf("%d ",&row[j]);
            if(max<row[j])
            max=row[j]; }
        maxi[i]=max; }
    for(i=0;i<m;i++){
        if(min>maxi[i]){
            min=maxi[i]; }
    printf("%d ",maxi[i]); }
    printf("%d",min);
    return 0; }