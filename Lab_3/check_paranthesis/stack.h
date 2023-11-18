#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include<stdbool.h>
#define Max_size 100
//header file
typedef struct
{
    // changes to be made here for datatype
    int key;
}element;
//defining/prototyping as otherwise default return type was int
element stack[Max_size];
element pop();
bool isfull();
bool isempty();
void push(element e);
void display();
#endif
