 // Program to Convert Farenheit to Celsius to Kelvin

 #include<stdio.h>
 #include<conio.h>

 int main(){

    char temp_unit;
    printf("Enter the Temperature Unit Below \n");
    scanf("%d", &temp_unit);

    int Temperature;
    printf("Enter the Temperature Below \n");
    scanf("%d", &Temperature)

    if(temp_unit==F){

        int celsius;
        celsius = (5/9)(Temperature-32);

        int kelvin;
        kelvin = ((5/9)(Temperature-32)) + 273;
    }

    else if(temp_unit==C){

        int Farenheit;
        Farenheit = (9/5)*Temperature + 32;

        int kelvin
        kelvin = Temperature +273;
    }

    else if(temp_unit==K){

        int celsius;
        celsius = Temperature - 273;

        int Farenheit;
        Farenheit = (Temperature - 273)*(9/5) +32;
    }

    else{

        printf("Invalid Temperature Unit Mentioned");
    }

    return 0;
 }