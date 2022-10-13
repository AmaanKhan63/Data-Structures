import java.util.*;

class PrefixToInfix{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String exp = sc.next();
        int n = exp.length();

        Stack<String> stack = new Stack<String>();

        for(int i=n-1;i>=0;i--){
            char ch = exp.charAt(i);
            if(Character.isLetterOrDigit(ch)){
                stack.push(ch+" ");
            }
            else{
                stack.push("("+stack.pop()+" "+ch+" "+stack.pop()+")");
            }
        }
        System.out.println(stack.pop());
    }
}