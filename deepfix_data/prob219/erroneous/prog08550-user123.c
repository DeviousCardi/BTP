#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b) {
        if (b<c) {
            printf("%d",b); }
        else {
            printf("%d",c); } }
    else {
        if(b==c) {
        if (a<b) {
            printf("%d",a); }
        else {
            printf("%d",b); } }
      else {
        if (c==a) {
        if (a<b) {
            printf("%d",a); }
        else {
            printf("%d",b); } }
    else {
        if (a<b){
        if (b<c) {
            printf("%d",b);
        } else {
            if (a<c){
                printf("%d",c);
        }else { printf("%d",a); } }
    }else {
        if (b<c){
            if (c<a){
                printf("%d",c);
                }else {
                    printf("%d",a); } }
    else { printf("%d",b); } } } }
	return 0; }