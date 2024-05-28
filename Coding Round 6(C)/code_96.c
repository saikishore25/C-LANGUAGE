// structure in c language 

#include<stdio.h>
#include<conio.h>

struct tag1 {
    
    char name[20];
    int roll;
    char section[10];
    char string[11];

};

int main(){

    struct tag1 sec1 = {"KISHORE", 38, "CSA", "9440577934"};

    printf("The elements of the first structure are given below \n");
    printf("%s \n", sec1.name);
    printf("%d \n", sec1.roll);
    printf("%s \n", sec1.section);
    printf("%s \n", sec1.string);

    // struct tag1 sec1;

    // sec1.name[20] = "KISHORE";
    // sec1.roll = 38;
    // sec1.section[10] = "CSA";
    // sec1.string[11] = "9490983357";

    // struct tag1 sec2;

    // // sec2.name[20] = "RAJESH";
    // // sec2.roll = 30;
    // // sec2.section[10] = "CSA";
    // // sec2.string[11] = "9440577934";

    
    // sec2 = sec1;

    // printf("%s \n", sec2.name);
    // printf("%d \n", sec2.roll);
    // printf("%s \n", sec2.section);
    // printf("%s \n", sec2.string);

    
    

    return 0;
}
