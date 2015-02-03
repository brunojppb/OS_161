#include <types.h>
#include <lib.h>
#include <syscall.h>

int sys__exit(int code){
	kprintf("My Exit function called\n\n");
	return code;
}
