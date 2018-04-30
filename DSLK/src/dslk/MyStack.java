/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dslk;

/**
 *
 * @author DinhHieu
 */
public class MyStack {
    private LinkedList myStack;
    public MyStack(){
        myStack = new LinkedList();
    }
    public void push(int item){
        myStack.insertFront(item);
    }
    public Node pop(){
        return myStack.removeFront();
    }
    public void print(){
        myStack.print();
    }
    public boolean isEmpty(){
        return myStack.isEmpty();
    }
    public static void main(String[] args) {
        MyStack myStack = new MyStack();
        myStack.print();
        myStack.push(100);
        myStack.push(200);
        myStack.print();
    }
}

