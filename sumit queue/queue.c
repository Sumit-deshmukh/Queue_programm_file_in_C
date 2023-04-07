#include<stdio.h>
#include<malloc.h>
struct queue{
    int size;
     int f;
     int r;
     int* arr;

};
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;

    }
    return 0;
}
int isEmpty(struct queue*q){
    if(q->r==q->f){
        return 1;

    }
    return 0;
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf(" This queue is full");
        
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int dequeue(struct queue*q){
    int a= -1;
    if(isEmpty(q)){
        printf(" This queue is empty");

    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct queue q;
    q.size = 200;
    q.f=q.r=-1;
    q.arr = (int*)malloc(q.size*sizeof(int));

    
    
   
    
    // Enqueue elements
    enqueue(&q,13);
    enqueue(&q,24);
    printf("Dequeue %d\n" ,dequeue(&q));
    printf(" Dequeue %d\n" ,dequeue(&q));

    if(isFull(&q))
    {
        printf(" queue is full\n");
    }
    if (isEmpty(&q))
    {
        printf(" queue is empty\n");
    }
    
    

   

   


}