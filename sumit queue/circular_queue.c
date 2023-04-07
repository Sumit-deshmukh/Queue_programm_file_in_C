#include<stdio.h>
#include<malloc.h>
struct  circularqueue{
    int size;
     int f;
     int r;
     int* arr;

};
int isFull(struct circularqueue *q){
    if((q->r+1)%q->size==q->f){
        return 1;

    }
    return 0;
}
int isEmpty(struct circularqueue*q){
    if(q->r==q->f){
        return 1;

    }
    return 0;
}
void enqueue(struct circularqueue *q, int val){
    if(isFull(q)){
        printf(" This circular queue is full\n");
        
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("Enqued element : %d\n", val);
    }
}
int dequeue(struct circularqueue*q){
    int a= -1;
    if(isEmpty(q)){
        printf(" This circular queue is empty\n");

    }
    else{
        q->f = ( q->f +1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct circularqueue q;
    q.size = 4;
    q.f=q.r= 0;
    q.arr = (int*)malloc(q.size*sizeof(int));

    enqueue(&q,4);
    enqueue(&q,4);
    enqueue(&q,4);
    printf("dedqueue the element %d\n ", dequeue(&q));
     enqueue(&q,4);
    // enqueue(&q,4);
    

    
    
    
   

    if(isFull(&q))
    {
        printf(" circularqueue is full\n");
    }
    if (isEmpty(&q))
    {
        printf(" circularqueue is empty\n");
    }
    
    

   

   


}