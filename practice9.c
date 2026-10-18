#include <stdio.h>
#include <string.h>

int main() {
    char word[20];
    int age ;

    printf ("Enter your age :");
    scanf ("%d" ,&age);
    getchar();

    printf ("Enter your name: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0'; 
    

    printf("%s\n", word);

    for (int i = 0; word[i] != '\0'; i++){
        printf("%c ", word[i]);
    }

    return 0;
}