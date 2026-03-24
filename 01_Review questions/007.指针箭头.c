#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

int main() {
    struct Student s = {"小明", 18}; // 一个普通的结构体变量
    struct Student *p = &s;         // 一个指向该结构体的指针

    // 方式 A：直接用变量访问（用点）
    printf("名字: %s\n", s.name);

    // 方式 B：用指针访问（用箭头）
    printf("通过指针访问名字: %s\n", p->name); 

    // 方式 C：笨拙的解引用写法（等同于箭头）
    printf("解引用访问: %s\n", (*p).name);

    return 0;
}
