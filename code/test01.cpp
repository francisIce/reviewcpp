//
// Created by francisIce on 2018/11/26.
//

#include <stdio.h>
#include <string.h>
#define SIZE 30

char * s_gets(char * str, int n);

int main() {
    char in_str[SIZE];
    char out_str[SIZE];
    int i;

    printf("Push Enter to stop:\n");
    while (s_gets(in_str, SIZE) != NULL && in_str[0] != '\0'){
        int length;
        length = strlen(in_str);

        for(i = 0; i < length; i++){
            out_str[i] = in_str[length - i - 1];
        }
        out_str[length] = '\0';

        puts(out_str);
    }

    printf("bye\n");
    return 0;
}

char *s_gets(char *str, int n){
    char *rec_val;
    int i = 0;

    rec_val = fgets(str, n, stdin);
    if(rec_val){
        while(str[i] != '\n' && str[i] != '\0')
            i++;
        if(str[i] == '\n')
            rec_val[i] = '\0';
        else{
            while (getchar()!='\n')
                continue;
        }
    }

    return rec_val;
}
