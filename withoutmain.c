#include <stdio.h>
 
extern void _exit(register int code);
 
_start() {
    printf("Hello World\n");
    _exit(0);
}
