#include <stdio.h>
#include <string.h>
#include "header.h"
#include "custom_strlen.c"
#include "custom_strcpy.c"
#include "custom_strcat.c"
#include "custom_strcmp.c"
   
int main() {
    const int size = 81;
    char arr[size + 30] = {};
    char arr1[] = " its just tets";
    scanf("%81str", arr);
    //scanf("%81str", arr1);
    //int a = custom_strlen(size, arr);
    // int a = custom_strcmp(size, arr, arr1);
    //custom_strcpy(size, arr, arr1);
    custom_strcat(size, arr, arr1);

	



    printf("%s\n", arr);
   // printf("%d", a);
    return 0;
}
