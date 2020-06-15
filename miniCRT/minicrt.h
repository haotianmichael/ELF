#ifndef __MINI_CRT_H
#define __MINI_CRT_H

#ifndef  __cplusplus
extern "C" {
#endif


//malloc
#ifndef  NULL
#define NULL (0)
#endif

void free(void *ptr);
void *malloc(unsigned size);
static int brk(void *end_data_segment);
int mini_crt_init_heap();



//string
char *itoa(int n, char *str, int radix);
int strcmp(const char *src, const char *dst);
char *strcpy(char *dest, char *str);
unsigned strlen(const char *str);




//IO
typedef  int FILE;







#ifndef  __cplusplus
}
#endif


#endif
