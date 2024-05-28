// Program to Explain Pointer Structure in C 


#include<stdio.h>

struct tag1 {
    
    char name[20];
    int roll;
    char section[10];
    char string[11];

};


    int main(){
     
    struct tag1 sec1[10] = {"KISHORE", 38, "CSA", "94405893"};

    struct student* ptr = &sec1;

    printf("%s",(*ptr).name );
    printf("%s \n", ptr->name);
    
    
    
    return 0;
}