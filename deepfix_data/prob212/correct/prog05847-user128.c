#include <stdio.h>
int check(int no);
int check(int no){
    int x=no,sum=0;
    while(x){
        sum=sum+x%10;
        x=x/10; }
    if(!(no%sum)){
        printf("%d",no);
        return 1; }
    else
        return 0; }
int main(){
    int no;
    scanf("%d",&no);
    while(1){
        check(no);
        if (check(no))
            break;
        no++; }
    return 0; }