// Program to Calculate Simple Interest 

#include<stdio.h>
#include<conio.h>

int main(){

    float principal_amt;
    printf("Enter the Amount Below \n");
    scanf("%f", &principal_amt);

    float interest_rate;
    printf("Enter the Interest Rate Below \n");
    scanf("%f", &interest_rate);

    float years;
    printf("Enter the Time Below \n");
    scanf("%f", &years);

    float simple_interest;
    simple_interest = (principal_amt*interest_rate*years)/100;
    printf("The Simple Interest is %f", simple_interest);
}