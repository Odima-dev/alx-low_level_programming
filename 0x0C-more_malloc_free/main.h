#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int len(char *str);
int num_words(char *str);
char **strtow(char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
