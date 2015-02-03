#include <types.h>
#include <lib.h>
#include <syscall.h>

int sys_printchar(char c){
	return kprintf("Printchar called: char -> %c\n\n", c);
}
