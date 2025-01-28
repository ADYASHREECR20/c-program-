#include<stdio.h>
struct marks{
    float math;float english;float science;};
struct student {  
    char Name[50];int rollno; struct marks mark; } ;
    int main(){
    int n ;
    printf("enter no of students");scanf("%d", &n);
    struct student s[n];
    for(int i = 0; i<n; i++){  
        printf("Enter the details of the students \n");
        printf("Enter name: "); scanf("%s", s[i].Name); 
        printf("Enter roll: "); scanf("%d", &s[i].rollno);
        printf("Enter marks: ");scanf("%f", &s[i].mark.math);
        printf("Enter marks: ");scanf("%f", &s[i].mark.english);
        printf("Enter marks: ");scanf("%f", &s[i].mark.science);
    }// Display the details of all students
    for (int i = 0; i < n; i++) {
        float tm = s[i].mark.math + s[i].mark.english + s[i].mark.science;
        printf("\nDetails of student %d:\n", i + 1);
        printf("Name: %s\n", s[i].Name);
        printf("Roll No: %d\n", s[i].rollno);
        printf("Marks: %f\n", tm);
    }return 0;}