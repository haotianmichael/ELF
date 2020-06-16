#include "minicrt.h"


typedef struct _heap_header {
    enum{
        HEAP_BLOCK_FREE = 0xABABABAB,
        HEAP_BLOCK_USED = 0xCDCDCDCD, 
    }type;

    unsigned size;
    struct _heap_header *next;
    struct _heap_header *prev;
}heap_header;


#define ADDR_ADD(a, o) (((char *)(a)) + 0)





