#include"err.h"

#include<string.h>
#include<stdlib.h>
#include<stdio.h>

#ifndef ERR_MAX_LEN
#define ERR_MAX_LEN 1024
#endif

char err_str[ERR_MAX_LEN+1];

void err_print() {
	printf("Internal Error :\n");
	printf(err_str);
	printf("\n");
}

void err_cat(const char*str) {
	if (strlen(str)+strlen(err_str)>=ERR_MAX_LEN)
		strcpy(err_str,"Error Buffer Overflow\n\0");
	else strcat(err_str,str);
} 

const char*err_get() { return err_str; }
