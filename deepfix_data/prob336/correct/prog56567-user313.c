#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) {
        if(c>a) {
            if(b+a>c) {
                if(a^2+b^2<c^2) {
                printf("Acute Triangle"); }
                else {
                printf("Not Acute Triangle"); } }
            else {
                printf("Cannot form Triangle"); } } }
	return 0; }