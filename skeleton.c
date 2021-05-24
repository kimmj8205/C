// Lab Session for Data Structures
// Week 5: Queue
// Deque Implementation
// Data Science Laboratory at Hanyang University

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 10;

typedef int element;
typedef struct QueueNode {
    element item;
    struct QueueNode *prev;
    struct QueueNode *next;
} QueueNode;
typedef struct {
    QueueNode *front, *rear;
} QueueType;


int size = 0;

int is_empty(QueueType *q) {
    if(q->front == NULL && q->rear == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int is_full() {
    return size == LIMIT;
}

void add_front(QueueType *dq, element item) {
    if (is_full()) {
        printf("QUEUE媛� 苑� 李쇱뒿�덈떎.\n");
    } else {
        // Write down your code...
    }
}

void add_rear(QueueType *dq, element item) {
    if (is_full()) {
        printf("�먭� 苑� 李쇱뒿�덈떎.\n");
    } else {
        QueueNode *temp = (QueueNode *)malloc(sizeof(QueueNode));
        if(temp == NULL)
            printf("硫붾え由щ� �좊떦�� �� �놁뒿�덈떎.\n");
        else {
            // Write down your code...
        }
    }
}



int delete_front(QueueType *q) {
    element item;
    if(is_empty(q)) {
        printf("�먭� 鍮꾩뼱�덉뒿�덈떎.");
        return -1;
    } else {
        // Write down your code...
    }
}

int delete_back(QueueType *q) {
    
    element item;
    
    if(is_empty(q)) {
        printf("�먭� 鍮꾩뼱�덉뒿�덈떎.\n");
        return -1;
    } else {
        // Write down your code...
    }
    
}

int get_front(QueueType *q) {
    return q->front->item;
}

int get_back(QueueType *q) {
    return q->rear->item;
}

void display(QueueType *q) {
    QueueNode *temp = q->front;
    if (is_empty(q)) {
        printf("[ EMPTY QUEUE ]\n");
    } else {
        printf("FRONT ==> [  %d  ] ", temp->item);
        temp = temp->next;
        while (temp->next != NULL) {
            printf("[  %d  ] ", temp->item);
            temp = temp->next;
        }
        printf("[  %d  ] <== REAR\n", temp->item);
        printf("SIZE: %d\n", size);
        printf("FRONT: %d, REAR: %d\n", get_front(q), get_back(q));
    }
}

void display_from_rear(QueueType *q) {
    QueueNode *temp = q->rear;
    if (is_empty(q)) {
        printf("[ EMPTY QUEUE ]\n");
    } else {
        printf("REAR ==> [  %d  ] ", temp->item);
        temp = temp->prev;
        while (temp->prev != NULL) {
            printf("[  %d  ] ", temp->item);
            temp = temp->prev;
        }
        printf("[  %d  ] <== FRONT\n", temp->item);
        printf("SIZE: %d\n", size);
        printf("FRONT: %d, REAR: %d\n", get_front(q), get_back(q));
    }
}

int main(int argc, const char * argv[]) {
    
    QueueType *deque = (QueueType *)malloc(sizeof(QueueType));
    deque->front = NULL;
    deque->rear = NULL;
    
    add_front(deque, 11);
    add_front(deque, 48);
    add_front(deque, 42);
    display(deque);
    display_from_rear(deque);
    add_rear(deque, 43);
    add_rear(deque, 54);
    add_rear(deque, 68);
    display(deque);
    display_from_rear(deque);
    add_rear(deque, 22);
    add_rear(deque, 56);
    add_rear(deque, 32);
    add_rear(deque, 14);
    display(deque);
    display_from_rear(deque);
    
    add_rear(deque, 0);
    
    printf("delete front %d\n", delete_front(deque));
    printf("delete front %d\n", delete_front(deque));
    display(deque);
    display_from_rear(deque);
    printf("delete back %d\n", delete_back(deque));
    printf("delete back %d\n", delete_back(deque));
    printf("delete back %d\n", delete_back(deque));
    printf("delete back %d\n", delete_back(deque));
    printf("delete back %d\n", delete_back(deque));
    printf("delete back %d\n", delete_back(deque));
    printf("delete back %d\n", delete_back(deque));
    printf("delete back %d\n", delete_back(deque));
    printf("delete back %d\n", delete_back(deque));
    display(deque);
    printf("delete back %d\n", delete_back(deque));
    display_from_rear(deque);
    return 0;
}