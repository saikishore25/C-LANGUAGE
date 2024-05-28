 // Program to Determine the Eligibility for Applying Driving Liscence.

 #include<stdio.h>
 #include<conio.h>

 int main(){

    int age;
    printf("Enter the Age Of the Applicant Below \n");
    scanf("%d", &age);

    if(age>=18&&age<=65){

        printf("You are Eligible to Apply for Driving Liscence \n");
    }

    else{

        printf("You are not Eligible to Apply for Driving Liscence \n");
    }
    

    return 0;
 }