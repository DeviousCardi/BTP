#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k, g, h;
    scanf("%d",&n);
    g=n;
    h=0;
    for(i=1;i<=(2*n)+1;i++) {
        if(g>=0)
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
            for(j=1;j<=h+2;j++) {
                if(j>h+1) {
                    for(k=j+1;k<=n+2;k++) {
                        if((i+k)%2==0) {
                            printf("x"); }
                        else {
                            printf("*"); } } }
                else {
                    printf(" "); } } }
        printf("\n"); }
    return 0; }