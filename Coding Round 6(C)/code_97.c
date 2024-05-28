#include<stdio.h>

struct tag1 {
    
    char name[20];
    int roll;
    char section[10];
    char string[11];

};


    int main(){
     
    // struct tag1 sec1[10] = {"KISHORE", 38, "CSA", "9440577934", "RAMESH", 30, "CSA", "9490983357"};

    // for(int i=0; i<2; i++){
        
    //     printf("%s \t %d \t %s \t %s \t", sec1[i].name, sec1[i].roll, sec1[i].section, sec1[i].string);
    //     printf("\n");
    // }

    struct tag1 sec1 = {"KISHORE", 38, "CSA", "93939393"};
    struct tag1 sec2;                    // STRUCTURE ELEMENTS CAN BE ASSIGNED TO ANOTHER STRUCTURE OF SAME TYPE

    sec2 = sec1;

    printf("%s and %s \n", sec1.name, sec2.name);
    
    return 0;
}