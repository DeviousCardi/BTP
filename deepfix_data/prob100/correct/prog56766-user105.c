#include<stdio.h>
#include<limits.h>
int main() {
    int i,x,n,j,m,s[1000],t[1000],max=INT_MIN;
    int min;
    scanf("%d %d",&n,&m);
    for(j=0;j<m;j++){
    max=INT_MIN;
    for(i=0;i<n;i++){
        scanf("%d ",&x);
        s[i]=x;
        if(max<s[i]){
            max=s[i]; } }
    t[j]=max; }
    for(j=0,min=t[0];j<m;j++){
       if(min>t[j])
      min=t[j]; }
    printf("%d",min);
    return 0; }