#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int main() {
    int rup,count=0,i,j,k;
    scanf("%d",&rup);
    for(i=0;i<=rup/5;i++){
        for(j=0;j<=rup/3;j++){
            for(k=0;k<=rup;k++){
                if(5*i+3*j+k==rup){
                    count++; } } } }
    printf("%d",count);
    return 0; }