#include<stdio.h>
#include<time.h>
#include<string.h>

#define DEBUG_LOG(str) debug_logger(str)
#define ERROR_LOG(str) error_logger(str)
#define INFO_LOG(str)  info_logger(str)

char* print_time();

void debug_logger(char *str);

void error_logger(char *str);

void info_logger(char *str);

