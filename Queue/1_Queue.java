import java.util.*;

class Queue{
    int capacity;
    int front,rear,size;
    int arr[];
    Queue(int capacity){
        this.capacity = capacity;
        front = size = 0;
        rear = capacity - 1;
        arr = new int[capacity];
    }

    boolean isFull(Queue queue){
        if(queue.size == capacity){
            System.out.println("QueueOverflow");
            return true;
        }
        return false;
    }

    boolean isEmpty(Queue queue){
        if(queue.size == 0){
            System.out.println("QueueUnderflow");
            return true;
        }
        return false;
    }

    void enQueue(int item){
        if(isFull(this))
            return;
        rear = (rear+1)%capacity;
        arr[rear] = item;
        size++;
        System.out.println(item+" inserted in queue");
    }

    void deQueue(){
        if(isEmpty(this))
            return;
        int item = arr[front];
        front = (front+1)%capacity;
        size--;
        System.out.println(item+" deleted from queue");
    }

    public static void main(String[] args) {
        Queue queue = new Queue(5);
        queue.enQueue(1);
        queue.enQueue(2);
        queue.enQueue(3);
        queue.enQueue(4);
        queue.enQueue(5);
        queue.enQueue(6);

        queue.deQueue();
        queue.deQueue();
        queue.deQueue();
        queue.deQueue();
        queue.deQueue();
        queue.deQueue();
    }
}