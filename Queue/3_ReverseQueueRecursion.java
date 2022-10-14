// Java Program to Reverse Queue
import java.util.Queue;
import java.util.LinkedList;

class ReverseQueue {
    static Queue<Integer> queue = new LinkedList<Integer>();

    public static void main(String[] args) {

        // Adding Elements to Queue
        queue.add(10);
        queue.add(20);
        queue.add(30);
        queue.add(40);
        queue.add(50);
        queue.add(60);
        queue.add(70);
        queue.add(80);
        queue.add(90);
        queue.add(100);

        // Printitng Original Queue
        System.out.println("Original Queue :- ");
        System.out.println(queue);

        // Calling Reverse Queue Function
        reverseQueue();

        // Printting Reversed Queue
        System.out.println("Reversed Queue :- ");
        System.out.println(queue);
    }

    static void deQueue() {
        if (queue.size() != 0) {

            // Storing poped value in temp
            int temp = queue.poll();
            deQueue();
            queue.add(temp);
        }
    }
}

// This code is contributed by Vikas Joshi
