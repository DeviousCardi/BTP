#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,l,m,h;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a+b>=c&&b+c>=a&&c+a>=b) {
        if(a<=b){
            if(a<=c){
                if(b<=c){
                l=a;
                m=b;
                h=c; }
                else
                {l=a;
                m=c;
                h=b; }
                    }else{
                        l=c;
                        m=a;
                        h=b; }
                }else{
                        if(b<=c){
                            if(a<=c){
                                    l=b;
                                    m=a;
                                    h=c; }
                            else{
                                l=b;
                                m=c;
                                h=a; } }
    else{
        l=c;
        m=b;
        h=a; } }
if(l*l+m*m>h*h)
printf("ACUTE");
if(l*l+m*m<h*h)
printf("OBTUSE");
if(l*l+m*m==h*h)
printf("RIGHT"); }
    else
    {printf("INVALID"); }
    return 0; }