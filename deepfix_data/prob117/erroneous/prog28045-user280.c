#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int tow(int n) {
    if(!n)
    return 0;
    else return 2*tow(n-1)+1; }
int main() {
    int i,t,k[100],n,;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&k[i]);
        for(i=0;i<t;i++)
        for(n=0;n++) {
            if tow(n)==k[i] {
                printf("yes");
                break; } }
        if(tow(n)>k[i]) {
            printf("no");
            break; } }
	return 0; }