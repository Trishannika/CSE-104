#include<stdio.h>
float getArea(float r)
{
    return 3.1416*r*r;
}
void printVolume(float r)

 {
     float volume;
     printf("%f\n",(4*r*getArea(2))/3);
 }

int main(){

printf("%f\n",getArea(2));
    printVolume(2);
}

