#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k, g;
    scanf("%d",&n);
    g=n;
    for(i=1;i<=(2*n)+1;i++) {
        if(g>0)
        {for(j=1;j<=g+1;j++) {
            if(j>g) {
                for(k=j+1;k<=n+2;k++) {
                    if((i+k)%2==0) {
                        printf("x"); }
                    else {
                        printf("*"); } } }
            else {
                printf(" "); } }
            g--; }
        else {
            g++;
            for(j=1;j<=g+1;j++) {
                if(j>g+1) {
                    for(k=j+1;k<=n+2;k++) {
                        if((i+k)%2==0) {
                            printf("x"); }
                        else {
                            printf("*"); } } }
                else {
                    printf(" "); } } }
        printf("\n"); }
    return 0; }