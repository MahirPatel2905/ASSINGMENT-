//WAP to show difference between Structure and Union.
#include <stdio.h>

struct Employee {
    int empno;
    char name[20];
    float salary;
};

union Student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct Employee emp = {1, "Alice", 50000.0};
    union Student stud;

    stud.rollno = 101;
    printf("Union - Roll No: %d\n", stud.rollno);

    stud.marks = 89.5;
    printf("Union - Marks: %.2f (Roll No might now be overwritten)\n", stud.marks);

    printf("Structure - Employee No: %d, Name: %s, Salary: %.2f\n", emp.empno, emp.name, emp.salary);

    return 0;
}

