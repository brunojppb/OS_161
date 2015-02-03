#include <types.h>
#include <lib.h>
#include <syscall.h>

int sys_hello(void){
	return kprintf("Hello Bruno!\n");
}
