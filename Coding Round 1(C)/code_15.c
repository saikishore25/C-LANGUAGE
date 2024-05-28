 // Program to Check whether you are eligible to apply for votor card in india.
 
 #include<stdio.h>
 #include<conio.h>

 int main(){

    char nationality;
    printf("Enter Your Nationality \n");
    printf("I-Indian \n");
    printf("X-Others \n");
    scanf("%c", &nationality);

    int age;
    printf("Enter the Age Of the Applicant Below \n");
    scanf("%d", &age);


    if(nationality == 'I'){
        
        if(age>=18&&age<=65){

            printf("You are Eligible to Apply for Votor ID \n");
        }
    }

    else{

        printf("You are not Eligible to Apply for Votor ID \n");
    }
    

    return 0;
 }