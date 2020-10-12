#include<stdio.h>

struct student
{
    char name[20],address[20];
    int roll, marks;
};

void input(student *obj){
    printf("Enter name: ");
    scanf("%s",obj->name);
    printf("Enter roll: ");
    scanf("%d",&obj->roll);
    printf("Enter marks: ");
    scanf("%d",&obj->marks);
    printf("Enter address: ");
    scanf("%s",obj->address);
}


void display(student obj){
    printf("Name: %s\n",obj.name);
    printf("Roll: %d\n",obj.roll);
    printf("Marks: %d\n",obj.marks);
    printf("Address: %s\n",obj.address);
}

int main(){
    struct student student_obj1;
    input(&student_obj1);
    display(student_obj1);
}
