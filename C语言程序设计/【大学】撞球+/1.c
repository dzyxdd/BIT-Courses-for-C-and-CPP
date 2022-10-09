#include <stdio.h>
#include <math.h>
int main(){
    double w=0,l=0,x0=0,y0=0,x1=0,y1=0;
    char str[1200]="0";
    scanf("%lf %lf",&w,&l);
    scanf("%lf %lf",&x0,&y0);
    scanf("%lf %lf",&x1,&y1);
    scanf("%s",str);
    int i=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='F'){
            y0=-y0;
        }
        else if(str[i]=='B'){
            y0=2*l-y0;
        }
        else if(str[i]=='L'){
            x0=-x0;
        }
        else if(str[i]=='R'){
            x0=2*w-x0;
        }
    }
    double x=0,y=0,temp=0,s=0;
    x=x1-x0;
    y=y1-y0;
    temp=x*x+y*y;
    s=sqrt(temp);
    printf("%.4lf\n",s);
}