import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

import javax.swing.plaf.TreeUI;

class SortQueue{
    static Queue<Integer> queue = new LinkedList<>();
    public static void main(String[] args) {
        queue.add(5);
        queue.add(1);
        queue.add(2);
        queue.add(6);
        queue.add(3);
        queue.add(4);
        int n = queue.size();
        System.out.println(queue);

        if(checkSort(n))
            System.out.println("YES");
        else
            System.out.println("NO");
    }

    static boolean checkSort(int n){
        Stack<Integer> stack = new Stack<Integer>();
        int excepted = 1;
        int front;
        while(!queue.isEmpty()){
            front = queue.peek();
            queue.poll();
            if(excepted == front)
                excepted++;
            else{
                if(stack.empty())
                    stack.push(front);
                else if(!stack.empty() && stack.peek() < front)
                    return false;
                else
                    stack.push(front);
            }
        }
        while(!stack.empty() && stack.peek() == excepted){
            stack.pop();
            excepted++;
        }
        if(excepted - 1 == n && stack.empty())
            return true;
        return false;
    }
}