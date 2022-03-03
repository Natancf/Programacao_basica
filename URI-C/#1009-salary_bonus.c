#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[50];
    double salary, sales;

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sales);

    salary = salary + sales * 0.15;

    printf("TOTAL = R$ %.2f\n", salary);
    
    return 0;
}