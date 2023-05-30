#include<stdio.h>
float dientich(int a,int b){
    float s;
    s=a*b;
    return (s);
}

float chuvi(int a,int b){
    float d;
    d= (a+b)*2;
    return (d);
}

int main() {
    int a,b;
    a=12;
    b=25;
    float c= dientich(a,b);
    printf("dien tich la%.2f\n",c);
    float r= chuvi(a,b);
    printf("chu vi la%.2f\n",r);
}

