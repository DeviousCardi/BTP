#include <stdio.h>
int min(int a,int b){if(a<=b)return a;
else return b;}
int main(){
    int i,j,k,n,e,l;
    scanf("%d",&n);
    int s[n];
    for(l=0;l<n;l++){
    for(i=0;i<n;i++){
        scanf("%d",&e);
        s[i]=e; }
    int m=s[0];
    for(j=1;j<n;j++){m=min(m,s[j]);}
    for(k=0;k<n;k++){if(s[k]==m){printf("%d ",m);s[k]=100;}}}
    printf("end");
    return 0; }