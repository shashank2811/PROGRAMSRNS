#include<stdio.h>
#include<stdlib.h>

typedef struct name{
    char names[50];
    struct name *link;
}nm;

nm* insert(nm *);

int main()
{
    nm *t,*first=NULL;
    int n;
    scanf("%d",&n);
    while(n--)
       first=insert(first); 
    for(t=first;t!=NULL;t=t->link)
        printf("%s\n",t->names);
    return 0;
}

nm* insert(nm *f)
{
    nm *t,*l,*p;
    t=(nm*)malloc(sizeof(nm));
    t->link=NULL;
    scanf("%s",t->names);
    if(f==NULL)
        return t;
    for(p=0,l=f;l!=NULL;p=l,l=l->link)
    {
        if(l->names[0]>t->names[0] && l==f){
            t->link=l;
            return t;
        }
        else if(l->names[0]>t->names[0]){
            t->link=l;
            p->link=t;
            return f;
        }
    }
    p->link=t;
    l=t;
    return f;
}