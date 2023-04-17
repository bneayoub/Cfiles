#include <stdio.h>
#include <stdarg.h>

void print_students(const char *first_student, ...) {
    va_list args;
    va_start(args, first_student);

    const char *student_name = first_student;
    int count = 1;
    while (student_name != NULL) {
        printf("Student %d: %s\n", count++, student_name);
        student_name = va_arg(args, const char *);
    }

    va_end(args);
}

int main() {
    print_students("Alice", "Bob", "Carol", "David", NULL);
    return 0;
}