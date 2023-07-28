#include<stdio.h>
int main()
{
	char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    switch (character) 
	{
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel\n",character);
            break;
        default:
            printf("%c is a consonant\n",character);
    }

}