#include <stdio.h>
int main() {
    int ln,nl,a[100],i=1,j,k,flag=0;
    scanf("%d",&ln);
    scanf("%d",&nl);
    scanf("%d",&a[0]);
    while(i<nl){
        scanf("%d",&a[i]);
        i++; }
    for(j=0;j<nl;j++){
        for(k=j+1;k<nl;k++){
            if(a[j]+a[k]==ln){
                flag++;
                goto f1; } } }
    f1:
    if(flag==0){
        printf("unlucky"); }
    else{
        printf("lucky"); }
    return 0; }