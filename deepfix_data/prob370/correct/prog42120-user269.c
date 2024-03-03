#include<stdio.h>
int main()
{int e,f,g,a,c,b;
scanf("%d %d %d",&e,&f,&g);
if(e+f>g&&f+g>e&&e+g>f)
{ if(e<=f){if(f<=g) g=c,e=a,f=b;
else {if(e<=g) f=c,g=a,e=b;
       else f=c,g=a,e=b;}}
    else{if(f<=g) e=c,f=a,g=b;
    else e=c,f=a,g=b;}
    if(a*a+b*b==c*c||c*c+a*a==b*b||b*b+c*c==a*a)
    printf("RIGHT");
else if (a*a+b*b>c*c)
    printf("ACUTE");
    else if (a*a+b*b<c*c)
    printf("OBTUSE");}
    else printf("INVALID");
return 0;}