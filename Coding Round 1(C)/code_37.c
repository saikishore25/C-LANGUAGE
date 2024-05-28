// Q13. Program to increment salary of employees working at Engineering College.
#include<stdio.h>
#include<conio.h>

     int main(){
        int age, salary;
    printf("Enter the age as well as salary of the employee \n");
    scanf("%d %d \n", &age, &salary);

    if (age<35){
        if(salary<70000){
            salary += 10000;
            printf("New Salary is %d \n", salary);
        }
        else
        {
            salary +=8000;
            printf("New Salary is %d \n", salary);

        }
    }

    else if(age>35 && age<60 ){
        if(salary<90000){
            salary += 14000;
            printf("New Salary is %d \n", salary);
        }
        else{
            salary +=10000;
            printf("New Salary is %d \n", salary);
        }


    }


    else{
        printf("It's time for the employee to take voluntary retirement \n");
    }


     
     return 0;
}