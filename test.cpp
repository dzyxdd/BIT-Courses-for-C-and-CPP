#include <stdio.h>
#include <math.h>

int main(){
    int h,min;
    float c,a,b;
    scanf("%d%d",&h,&min) ;
    a=min/60.0*360;
    b=30*(h%12)+min/60.0*30;
    c= abs(a-b);
    if(c>180.0){
        c=360.0-c;
    }
    printf("%d %.2d %.1f",h,min,c);
}