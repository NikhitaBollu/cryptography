#include <stdio.h>
#include <string.h>
void encryptRailFence(char *message, int rails) {
    int messageLength = strlen(message);
    char railFence[rails][messageLength];
    for (int i = 0; i < rails; i++) {
        for (int j = 0; j < messageLength; j++) {
            railFence[i][j] = '\0';}}
      int row = 0, col = 0;
    for (int i = 0; i < messageLength; i++) {
        if (col == messageLength) {
            break;}
        railFence[row][col++] = message[i];
        if (row == rails - 1) {
            row = 0;
        } else {
            row++;}}
     printf("Encrypted Rail Fence Cipher: ");
    for (int i = 0; i < rails; i++) {
        for (int j = 0; j < messageLength; j++) {
            if (railFence[i][j] != '\0') {
                printf("%c", railFence[i][j]);}}}   
    printf("\n");}
int main() {
    char message[100];
    int rails; 
	    printf("Enter the message to encrypt: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
    printf("Enter the number of rails: ");
    scanf("%d", &rails);
    encryptRailFence(message, rails);
    return 0;}