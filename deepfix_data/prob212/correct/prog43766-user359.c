#include <stdio.h>
int main(){
    char a[4];
    int i=0,j;
    while(i<4){
        scanf("%c",&a[i]);
        i++; }
    int sum= (a[0]-'0'+a[1]-'0'+a[2]-'0'+a[3]-'0');
    for(j=2016;j<3000;j++){
        if((j%sum)==0){
            printf("%d",j); }
        else{
            continue; } }
 return 0; }