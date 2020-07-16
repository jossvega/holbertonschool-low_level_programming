#ifndef HOLBERTON_H
#define HOLBERTON_H

typedef __SIZE_TYPE__ size;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* #ifndef HOLBERTON_H */