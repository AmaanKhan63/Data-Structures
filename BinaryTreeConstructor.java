package com.pavan.Trees;

import java.util.Stack;

public class BinaryTreeConstructor {
    public static class Node{
        int data;
        Node left;
        Node right;

        Node(int data , Node left, Node right) {
            this.data = data;
            this.left = left;
            this.right = right;
        }
    }
    public static class Pair{
        Node node;
        int state;

        Pair(Node node, int state){
            this.node = node;
            this.state = state;
        }
    }

    public static void display(Node node){
        if(node == null) return;
        String str = "";
        str += node.left == null ? "." : node.left.data + "";
        str += " <- " + node.data + " -> ";
        str += node.right == null ? "." : node.right.data+"";
        System.out.println(str);

        display(node.left);
        display(node.right);
    }
    public static void main(String[] args) {
        Integer [] arr = {50,12,25,null,null,37,30,null,null,null,75,62,null,70,null,null,87,null,null};
        Stack<Pair> st = new Stack<Pair>();
        Node root = new Node(arr[0] ,null,null);
        Pair rootPair = new Pair(root, 1 );
        st.push(rootPair);
        int idx = 1;
        while(st.size() > 0){
            Pair top = st.peek();
            if(top.state == 1){
                if(arr[idx] != null){
                    Node leftchild = new Node(arr[idx],null,null);
                    top.node.left = leftchild;
                    st.push(new Pair(leftchild,1));
                }
                top.state++;
                idx++;
            }
            else if(top.state == 2){
                if(arr[idx] != null){
                    Node rightchild = new Node(arr[idx],null,null);
                    top.node.right = rightchild;
                    st.push(new Pair(rightchild,1));
                }
                top.state++;
                idx++;
            }
            else{
                st.pop();
            }
        }
        display(root);

    }
}
