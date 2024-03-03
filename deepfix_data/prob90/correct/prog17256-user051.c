#include <stdio.h>
int main(){
    int i,k,j,n,a,list[1000],flag=0;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        list[i]=scanf("%d",&a);
        for(j=0;j<i;j++) {
            if(list[j] + list[i] == k) {
                flag=1;
                break; } } }
    if(flag==1)
        printf("unlucky");
    if(flag==0)
        printf("unlucky");
    return 0; }