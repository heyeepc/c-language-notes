#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[32];
    int age;
} Student;
Student* create_student(int id, const char *name, int age) {
    Student *stu = malloc(sizeof(Student));
    if (stu == NULL) {
        return NULL;
    }

    stu->id = id;
    stu->age = age;

    // 拷贝名字
    snprintf(stu->name, sizeof(stu->name), "%s", name);

    return stu;
}
void print_student(const Student *stu) {
    if (stu == NULL) return;

    printf("ID: %d\n", stu->id);
    printf("Name: %s\n", stu->name);
    printf("Age: %d\n", stu->age);
}
void destroy_student(Student *stu) {
    if (stu == NULL) return;
    free(stu);
}
int main(void) {
    Student *s1 = create_student(1, "Alice", 20);
    if (s1 == NULL) {
        printf("malloc failed\n");
        return 1;
    }

    print_student(s1);

    destroy_student(s1);
    s1 = NULL;

    return 0;
}
