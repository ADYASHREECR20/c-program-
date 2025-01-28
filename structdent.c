#include<stdio.h>
struct student {  // Define a structure to store student details
    char Name[50];
    int rollno; 
    int mark; } ;
int main(){// Define an array of students
    struct student s[4];// Array of 4 students
    for(int i = 0; i<4; i++){  // Loop through each student to enter details
        printf("Enter the details of the students \n");// Read student details
        printf("Enter name: ");
        scanf("%s", s[i].Name); 
         printf("Enter roll: ");
        scanf("%d", &s[i].rollno);
        printf("Enter marks: ");
        scanf("%d", &s[i].mark);
    }// Display the details of all students
    for (int i = 0; i < 4; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Name: %s\n", s[i].Name);
        printf("Roll No: %d\n", s[i].rollno);
        printf("Marks: %d\n", s[i].mark);
    }return 0;}





    
    
    
    
  
       // printf("Enter the details of student %d:\n", i + 1);

        
       
         
 

