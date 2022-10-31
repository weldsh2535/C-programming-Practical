#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char fname[10];
    char lname[10];
    char gender[5];
    int age;
};
void printStudent(struct Student studs);
int main()
{
    struct Student stud1;
    struct Student stud2;
    //To initail the student data
    stud1.id = 2120;
    strcpy(stud1.fname, "Belete ");
    strcpy(stud1.lname,"Tadese");
    strcpy(stud1.gender, "Male");
    stud1.age = 32;
    //
    stud2.id = 2121;
    strcpy(stud2.fname, "Aweke ");
    strcpy(stud2.lname,"Lema");
    strcpy(stud2.gender, "Male");
    stud2.age = 21;
    //
    printStudent(stud1);
    printf("==================================\n");
    printStudent(stud2);
    return 0;
}

void printStudent(struct Student studs){
    printf("The student Id is %d\n", studs.id);
    printf("The student full name is %s\n", strcat(studs.fname ,studs.lname));
    printf("The student gender is %s\n", studs.gender);
    printf("The student age is %d\n", studs.age);
}