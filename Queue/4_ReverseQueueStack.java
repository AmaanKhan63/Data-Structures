import java.util.LinkedList;
import java.util.Queue;
import java.util.LinkedList;
import java.util.Stack;

class ReverseQueueStack{
    static Queue<Integer> queue = new LinkedList<Integer>();
    public static void main(String[] args) {
        queue.add(56);
        queue.add(27);
        queue.add(30);
        queue.add(45);
        queue.add(85);
        queue.add(92);
        queue.add(58);
        queue.add(80);
        queue.add(90);
        queue.add(100);
        System.out.println(queue.element());

        // Printitng Original Queue
        System.out.println("Original Queue :- ");
        System.out.println(queue);

        // Calling Reverse Queue Function
        reverseQueue();

        // Printting Reversed Queue
        System.out.println("Reversed Queue :- ");
        System.out.println(queue);
    }

    static void reverseQueue(){
        Stack<Integer> stack = new Stack<Integer>();

        while(queue.size() != 0){
            stack.push(queue.poll());
        }
        while(!stack.empty()){
            queue.add(stack.pop());
        }
    }
}