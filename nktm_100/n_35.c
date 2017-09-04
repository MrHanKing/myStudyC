//
// Created by HanJun on 2017/9/4.
//
#include <stdio.h>
#include <string.h>
/**
35.请编写一个函数，用来删除字符串中的所有空格。
 **/
int main()
{
    const char * input = "Hello World! Welcome To Beijing!";
    char output[1024];
    int i, j, input_len;
    input_len = strlen(input);
    j = 0;
    for(i = 0; i < input_len; i++)
    {
        if (input[i] != ' ')
        {
            output[j] = input[i];
            j++;
        }
    }
    output[j] = '\0';
    printf("Input string is: %s\n", input);
    printf("After spaces were removed: %s\n", output);
    return 0;
}
