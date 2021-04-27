#include <ctype.h>
#include <string.h>
struct new
{
    char str[100];
};
typedef struct new A; 
int main()
{
    A a,b;
    int r=0;
    int c=0;
    printf("enter the string 1\n");
    gets(a.str);
    printf("enter string 2\n");
    gets(b.str);
    for(int i=0;i<strlen(a.str);i++)
    {
        a.str[i]=tolower(a.str[i]);
        b.str[i]=tolower(b.str[i]);
        r+=(a.str[i]);
        c+=(b.str[i]);
    }
    if(r==c)
        printf("anagram");
    else
        printf("not anagram");
}