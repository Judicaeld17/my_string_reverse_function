// Description
// Write a program that takes a string as an argument and returns it reversed.

// Your algorithm must be IN PLACE. (What is in place?)
// An in-place algorithm is an algorithm which transforms input using no auxiliary data structure.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* reverse_string(char* str){
    char* temp=str;
    char* rev_str=(char*)malloc((strlen(str)+1)*sizeof(char));
    char* rev_str_start=rev_str;
    while(*temp!='\0'){
        temp++;
    }
    while(temp>str){
        temp--;
        *rev_str=*temp;
        rev_str++;
    }
    rev_str++;
    *rev_str='\0';
    return rev_str_start;
    
}
// int main(){
//     char test[6] = "hello";
//     printf("%s",reverse_string(test));
//     return 0;
// }