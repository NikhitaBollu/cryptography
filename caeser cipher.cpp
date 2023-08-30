 #include<stdio.h>
#include<ctype.h>
int main() 
{
char text[500], ch;
int key;
printf("Enter a message to encrypt: ");
scanf("%s", text);
printf("Enter the key: ");
scanf("%d", & key);
for (int i = 0; text[i] != '\0'; ++i)
{
ch = text[i];
if (isalnum(ch)) 
{
	
ch = (ch - 'a' + key) % 26 + 'a';
}
text[i]=ch;  
   }
    printf("Encrypted message: %s", text);
    return 0;
	}
	