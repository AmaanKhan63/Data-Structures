import java.util.*;

class InfixToPostfix{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String exp = sc.next();
        int n = exp.length();
        String result = new String();
        Stack<Character> stack = new Stack<Character>(); 

        for(int i=0;i<n;i++){
            char ch = exp.charAt(i);
            if(Character.isLetterOrDigit(ch)){
                result += ch;
            }
            else if(ch == '('){
                stack.push(ch);
            }
            else if(ch == ')'){
                while(!stack.empty() && stack.peek()!='('){
                    result += stack.pop();
                }
                stack.pop();
            }
            else{
                while(!stack.empty() && prec(ch) <= prec(stack.peek())){
                    result += stack.pop();
                }
                stack.push(ch);
            }
        }
        while(!stack.empty() && stack.peek()!='('){
            result += stack.pop();
        }
        System.out.println(result);
    }

    static int prec(char ch){
        switch(ch){
            case '+':
            case '-':
                return 1;
            case '*':
            case '/':
                return 2;
            case '^':
                return 3;
        }
        return -1;
    }
}