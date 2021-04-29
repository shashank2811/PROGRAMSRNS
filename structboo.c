#include <stdlib.h>
struct book
{
    char title[10];
    char author[10];
    float price;
    int bid;
};typedef struct book B;
void read(B *b)
{
     printf("Enter the title, author name, price and book id\n");
     scanf("%s%s%f%d",b->title,b->author,&(b->price),&(b->bid));
}

void print(B *b)
{
    printf("The book details are\n");
    printf("%s\n%s\n%f\n%d\n",b->title,b->author,(b->price),(b->bid));
}
int main()
{
   B bk;
   B *sptr=&bk;
   read(sptr);
   print(sptr);
   return 0;       
}