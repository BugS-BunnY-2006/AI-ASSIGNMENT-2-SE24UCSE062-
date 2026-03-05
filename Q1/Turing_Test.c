#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Turing Test Simulation\n");
    printf("You are chatting with an unknown entity.\n");
    printf("Try to decide if it is human or machine.\n");
    printf("Type 'bye' to exit.\n\n");

    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);

        if (strstr(input, "bye") != NULL) {
            printf("Entity: Goodbye! Nice talking to you.\n");
            break;
        }
        else if (strstr(input, "hello") != NULL || strstr(input, "hi") != NULL) {
            printf("Entity: Hello! How are you today?\n");
        }
        else if (strstr(input, "name") != NULL) {
            printf("Entity: My name is Alex. What's yours?\n");
        }
        else if (strstr(input, "how are you") != NULL) {
            printf("Entity: I'm doing well, thanks for asking!\n");
        }
        else if (strstr(input, "weather") != NULL) {
            printf("Entity: The weather seems nice today.\n");
        }
        else {
            printf("Entity: That's interesting. Tell me more.\n");
        }
    }

    return 0;
}
