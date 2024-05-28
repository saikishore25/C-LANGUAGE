// Program to assign grades to students according to their marks 

#include <stdio.h>

struct tag1{
    
    char name[50];
    int roll;
    int marks;
    char grade;
    
};


int main()
{
    struct tag1 s1[10];
    int n;
    printf("Enter the number of students you want to store data for \n");
    scanf("%d", &n);
    
    printf("\n");
    
    for(int i=0; i<n; i++){
        
        scanf("%s", &s1[i].name);
        scanf("%d", &s1[i].roll);
        scanf("%d", &s1[i].marks);
        
        
    }
    
    for(int i=0; i<n; i++){
        
        if(s1[i].marks<=50 && s1[i].marks>=0){
            
            s1[i].grade = 'F';
        }
        
        else if(s1[i].marks<=60 && s1[i].marks>=50){
            
            s1[i].grade = 'E';
        }
        
        else if(s1[i].marks<=70 && s1[i].marks>=60){
            
            s1[i].grade = 'D';
        }
        
        else if(s1[i].marks<=80 && s1[i].marks>=70){
            
            s1[i].grade = 'C';
        }
        
        else if(s1[i].marks<=90 && s1[i].marks>=80){
            
            s1[i].grade = 'B';
        }
        
        else if(s1[i].marks<=100 && s1[i].marks>=90){
            
            s1[i].grade = 'A';
        }
    }
    
    
    
    for(int i=0; i<n; i++){
        
        printf("Name of the student: %s \n", s1[i].name);
        printf("Roll Number: %d \n", s1[i].roll);
        printf("Marks: %d \n", s1[i].marks);
        printf("Grade: %c \n", s1[i].grade);
        
        
    }

    return 0;
}
