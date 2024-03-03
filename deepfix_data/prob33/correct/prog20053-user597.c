#include <stdio.h>
int main() {
    int i,dmg,hp,n,a,b;
    scanf("%d\n%d",&hp,&n);
    scanf("%d ",&a);
    dmg=0;
    for(i=1;i<n;i++){
        scanf("%d ",&b);
        if(b>a){
            continue; }
        else{
            dmg=dmg+(a-b); }
        a=b; }
    printf("%d %d %d",dmg,a,b);
    return 0; }