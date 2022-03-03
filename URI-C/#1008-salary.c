#include <stdio.h>
#include <stdlib.h>

int main(){
    int number, hours;
    double salary_hours, salary;

    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%lf", &salary_hours);
    salary = hours * salary_hours;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    
    return 0;
}