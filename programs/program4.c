#include<stdio.h>
int main(){
    
 int x = 10;
 int y = 2;
 int z = 0;

 z = x + y;
 z = x - y;
 z = x * y;
 z = x / y;
 z = x % 2;

 // x++ increment
 // x-- decrement

 // augmented assignment operators
 x+=3;
 x-=3;
 x*=3;
 x/=3;
 x%=3;

 printf("%d", x);

 int n = 5;

printf("%d\n", n++); // 5 (pehle print, baad me +1)
printf("%d\n", ++n); // 7 (pehle +1, fir print)

 return 0;
}