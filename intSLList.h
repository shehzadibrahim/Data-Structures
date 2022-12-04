#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class node{

public:


node(int el,node *ptr = 0){
info = el;
next= ptr;
}


int info;
node *next;

};


class list{
public:
list(){
head = tail = 0;
}
~list();

int isEmpty(){

    return head == 0;
}



void addToHead(int);
void addToTail(int);
void deleteFromHead(int);
void deleteFromTail(int);
void deleteNode(int);
bool isInList(int) const;


private:
node *head, *tail;

};

#endif