#include<stdio.h>

struct complex
{
    int real;
    int img;
};

void input(complex *obj){
    printf("Enter complex no.[format real img]: ");
    scanf("%d %d",&obj->real,&obj->img);
}

complex sum(complex obj1,complex obj2){
    complex temp;
    temp.img=obj1.img+obj2.img;
    temp.real=obj1.real+obj2.real;
    return temp;
}

void display(complex obj){
    printf("%d + i%d",obj.real,obj.img);
}

int main(){
    struct complex obj1, obj2, objSum;
    input(&obj1);
    input(&obj2);
    objSum = sum(obj1,obj2);
    display(objSum);
}
