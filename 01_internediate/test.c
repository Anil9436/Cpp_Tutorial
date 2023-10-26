#include<stdio.h>

struct Name{
    char* name;
    int len_name;
};
void print(struct Name* name)
{
    printf("The name %s has length of %d chars\n",name->name,name->len_name);
}
int main()
{
    struct Name name1;
    name1.name = "anil";
    name1.len_name = 4;
    print(&name1);
}

// c doesnt support the member functions inside the struct
//where as c++ supports it.