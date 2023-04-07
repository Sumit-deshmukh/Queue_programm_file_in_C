#include<stdio.h>
#include<stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node{
    int data;
    struct Node *next;
};

void linkedlist_traversal(struct Node*ptr){
    printf("printing the elements of this linked list\n");
    while(ptr!=NULL){
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;

    }
}

void enqueue(int val){
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is full");

    }
    n->data = val;
    n->next = NULL;
    if(f==NULL){
        f=r=n;
    }
    else{
        r->next = n;
    }

}

int dequeue(){
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("queue is empty\n");

    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main(){
    linkedlist_traversal(f);
    printf(" Dequeuing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);

    printf("Dequeuing element %d\n",dequeue());
    printf("Dequeuing element %d\n",dequeue());
    printf("Dequeuing element %d\n",dequeue());
    printf("Dequeuing element %d\n",dequeue());
    linkedlist_traversal(f);
}