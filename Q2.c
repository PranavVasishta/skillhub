//vowel or consonent
#include<stdio.h>
int main()
{
	char a;
	printf("Enter a character\n");
	a = getchar();
	if(a=='a'|a=='e'|a=='i'|a=='o'|a=='u')
	{
		printf("Character is a vowel");
	}
	else
	{
		printf("Character is a consonant");
	}
	return 0;
}
