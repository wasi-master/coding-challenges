#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* sort_string(const char* str){
    char* sorted_str = malloc(sizeof(char) * (strlen(str) + 1));
    int i;
    for(i = 0; i < strlen(str); i++){
        sorted_str[i] = str[i];
    }
    sorted_str[i] = '\0';
    qsort(sorted_str, strlen(str), sizeof(char), (int (*)(const void*, const void*))strcmp);
    return sorted_str;
}

int main(){
    char* input = malloc(sizeof(char) * 100);
    printf("Enter anagram to solve: ");
    scanf("%s", input);
    printf("Sorted: %s\n", sort_string(input));

    FILE *file = fopen("words.txt", "r");
    char line[40];
    while (fgets(line, sizeof(line), file)) {
        line[strcspn(line, "\n")] = 0;
        if (strcmp(sort_string(input), sort_string(line)) == 0) {
            printf("%s", line);
            printf("\n");
        }
    }
    fclose(file);
}