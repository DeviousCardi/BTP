#include <stdio.h>
int main(){
    int k, num[100],sum;
    for (int i=0 ; i<100 ; i++) {
        for(int j=i ; j<100 ; j++) {
            sum=num[i]+num[j];
            if(sum==k) {
                printf("lucky");
                return 0; } } }
    printf("unlucky");
    return 0; }