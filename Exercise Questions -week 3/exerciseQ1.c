#include <stdio.h>
#include <stdarg.h>

#define print(format, ...) do { \
    char str[1000]; \
    snprintf(str, sizeof(str), format, ##__VA_ARGS__); \
    printf("%s\n", str); \
} while(0)

int main() {
    char* data = "Training";
    char* data_1 = "John";
    char* data_2 = "Training";
    
    print("Welcome to %s", data);
    print("Hello to %s: Welcome to %s", data_1, data_2);
    
    return 0;
}
