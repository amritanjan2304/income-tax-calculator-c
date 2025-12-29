#include<stdio.h>
int main (){
    int income;
    float tax=0;
    printf("Enter your income: \n");
    scanf("%d", &income);
    if (income <= 250000){
        tax=0;
    }else if(income>250000 && income <=500000){
        tax = (income -250000)*0.05;

printf("your tax is %d\n ", tax);
    }else if (income>500000 && income <=1000000){
    tax= (income - 500000)*0.2 + (500000 - 250000)*0.05;
    printf("your tax is %d\n ", tax);
} else {
    tax =(income - 1000000)*0.3 + (1000000 - 500000)*0.2 + (500000 - 250000)*0.05;
    printf("your tax is %d\n ", tax);

}
return 0;
}