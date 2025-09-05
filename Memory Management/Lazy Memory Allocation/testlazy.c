#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    char *mem = sbrk(4096); // Request 1 page of memory
    mem[0] = 'a'; // Access the memory to trigger lazy allocation
    printf(1, "Lazy allocation test passed\n");
    exit();
}