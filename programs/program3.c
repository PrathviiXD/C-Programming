#include <stdio.h>
#include <stdbool.h>

int main() {

    int num1=1;int num2=10;int num3=-100;
    printf("%3d\n%6d\n%8d\n", num1, num2, num3);
    printf("%03d\n%006d\n%08d\n", num1, num2, num3);
    printf("%+3d\n%+6d\n%+8d\n", num1, num2, num3);//maybe good for accounting..
    printf("%+03d\n%+006d\n%+08d\n", num1, num2, num3); 

    char currency='$';
    double price=67.835467895789684;
    printf("the price of this cloth is: %c%.2lf\n", currency, price);




    bool Absent=1;
    if(Absent){printf("Nalayak Baccha\n");}else{printf("DevManus Baccha\n");}

    int num[5]={42,68,59,65,44};
    printf("%d", num[4]);


    return 0;

    
}