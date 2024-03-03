#include <stdio.h>
int main(){
    char a[4];
    int i=0;
    while(i<4){
        scanf("%c",&a[i]);
        i++; }
    int sum= (a[0]-'0'+a[1]-'0'+a[2]-'0'+a[3]-'0');
printf("%d",sum);
 return 0; }