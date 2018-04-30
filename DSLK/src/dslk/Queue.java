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
public class Queue {
    private LinkedList queue;
    
    public Queue () {
        queue = new LinkedList();
    }
    
    public void push (int item) {
        queue.insertBack(item);
    }
    
    public Node pop () {
        return queue.removeFront();
    }
    
    public void print() {
        queue.print();
    }
    public boolean isEmpty() {
        return queue.isEmpty();
    }
    public static void main(String[] args) {
        Queue Q = new Queue();
        Q.push(20);
        Q.push(30);
        Q.push(100);
        System.out.println("HÀNG ĐỢI");
        Q.print();
    }
}
