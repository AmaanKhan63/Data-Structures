import java.util.*;

class InfixToPrefix{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String exp = sc.nextLine();
        int n = exp.length();
        String result = new String();
        Stack<Character> stack = new Stack<Character>();

        // Reverse Infix Expression
        for (int j = exp.length(); j > 0; j--) {
            char c = exp.charAt(j - 1);
            if (c == '(')
                newExp += ')';
            else if (c == ')')
                newExp += '(';
            else
                newExp += c;
        }

        exp = String. valueOf(arr);
        System.out.println(exp);

        // Calculate PostFix
        for (i = 0; i < n; i++) {
            char ch = exp.charAt(i);
            if(ch == ' '){
                continue;
            }
            else if (Character.isLetterOrDigit(ch)) {
                result += ch;
            } else if (ch == '(') {
                stack.push(ch);
            } else if (ch == ')') {
                while (!stack.empty() && stack.peek() != '(') {
                    result += stack.pop();
                }
                stack.pop();
            } else {
                if (ch == '^') {
                    while (!stack.empty() && prec(ch) <= prec(stack.peek())) {
                        result += stack.pop();
                    }
                } else {
                    while (!stack.empty() && prec(ch) < prec(stack.peek())) {
                        result += stack.pop();
                    }
                    stack.push(ch);
                }
            }
        }

        while(!stack.empty() && stack.peek()!='('){
            result += stack.pop();
        }

        char resultArr[] = result.toCharArray();
        i=0;
        j = resultArr.length-1;
        while(i<j){
            char temp = resultArr[i];
            resultArr[i] = resultArr[j];
            resultArr[j] = temp;
            i++;
            j--;
        }
        result = String. valueOf(resultArr);
        System.out.println(result);
    }

    static int prec(char ch) {
        switch (ch) {
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