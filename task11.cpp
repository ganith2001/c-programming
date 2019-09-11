#include<stdio.h>
struct book 
{
	char title[20];
	char author[20];
	char genre[20];
};
main()
{
	struct book b1;
	printf("Enter the title of book: ");
	scanf("%s",&b1.title);
	printf("Enter the author of book: ");
	scanf("%s",&b1.author);
	printf("Enter the genre: ");
	scanf("%s",&b1.genre);
	printf("Title: %s",b1.title);
	printf("\nAuthor: %s",b1.author);
	printf("\nGenre: %s",b1.genre);
}

