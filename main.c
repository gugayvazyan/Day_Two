#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "header.h"
   
int main() {
    const int size = 81;
    char arr[size + 30] = {};
    char arr1[size]; 
    int a = 0;
    char let = '\0';



    /*  //STRLEN
    fgets(arr, 80, stdin);
    printf("%d\n", custom_strlen(arr)); 
    */

    /* //STRCMP
    
    fgets(arr, 80, stdin);
    fgets(arr1, 80, stdin);
    printf("%d\n", custom_strcmp(arr, arr1));
    */


    /* //STRCPY
    fgets(arr1, 80, stdin);
    custom_strcpy(arr, arr1);
    fputs(arr, stdout);  
    */
     
    /* //STRCAT
    fgets(arr1, 80, stdin);
    fgets(arr, 80, stdin);
    custom_strcat(arr, arr1);
    fputs(arr1, stdout);
	*/
    
    /*    //STRCHR
    fgets(arr, 80, stdin);
    scanf(" %c", &let);
    fputs(custom_strchr(arr,let) , stdout);
    */
    
    /* //STRRCHR
    fgets(arr, 80, stdin);
    scanf(" %c", &let);
    fputs(custom_strrchr(arr,let) , stdout);
    */

    //STRSTR
    fgets(arr, 80, stdin);
    fgets(arr1, 80, stdin);
    char* res = custom_strstr(arr, arr1);
    if (res) fputs(custom_strstr(arr,arr1) , stdout);
    else printf("Substring not found\n");

    return 0;
}
