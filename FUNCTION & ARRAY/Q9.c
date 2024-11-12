//WAP to show difference between Structure and Union.
#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

union Student {
    int id;
    char name[20];
    float marks;
};

int main() {
    struct Employee emp = {101, "Alice", 50000.0};
    union Student stu;

    printf("Structure Employee:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);

    stu.id = 1;
    printf("\nUnion Student:\n");
    printf("ID: %d\n", stu.id);
    
    sprintf(stu.name, "Bob");
    printf("Name: %s\n", stu.name);

    return 0;
}

