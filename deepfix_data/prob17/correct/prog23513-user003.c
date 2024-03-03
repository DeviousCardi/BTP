#include <stdio.h>
int main(){
    int i,m,n,j;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m],b[n];
    for(i=0;i<m;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    i=0;
    while(i<m){
        for(j=0;j<n;j++){
            if(a[i]!=b[j])
            {i++;
            break;} }
        i++; }
    if(j=n)printf("YES");
    else(printf("NO"));
    return 0; }