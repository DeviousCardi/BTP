#include <stdio.h>
int main() {
    int ln,nl,a[100],i=1,j,k;
    scanf("%d",&ln);
    scanf("%d",&nl);
    scanf("%d",&a[0]);
    while(i<nl){
        scanf("%d",&a[i]);
        i++; }
    for(j=0;j<nl;j++){
        for(k=1;k<nl;k++){
            if(a[j]+a[k]==ln){
                printf("lucky");
                goto f1; } } }
    f1:
     return 0; }