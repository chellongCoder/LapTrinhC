/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dslk;

/**
 *
 * @author Nguyen Thai Son
 */
public class LinkedList {

    private Node first;
    private Node last;

    public LinkedList() {
        first = last = null;
    }

    public boolean isEmpty() {
        if (first == null && last == null) {
            return true;
        } else {
            return false;
        }
    }

    public void insertFront(int item) {
        if (isEmpty()) {
            Node n = new Node(item);
            first = last = n;
        } else {
            Node n = new Node(item, first);
            //n.next=first;
            first = n;
        }
    }

    public void insertBack(int item) {
        if (isEmpty()) {
            Node node = new Node(item);
            first = last = node;
        } else {
            Node node = new Node(item);
            last.next = node;
            last = node;
        }
    }

    public Node removeFront() {
        Node node = null;
        if (!isEmpty()) {
            if (first == last) { //danh sách có 1 nút
                node = first;
                first = last = null;
            } else { //danh sách có nhiều nút
                node = first;
                first = first.next;
                node.next = null;
            }
        }
        return node;
    }

    public Node removeBack() {
        Node node = null;
        if (!isEmpty()) {
            if (first == last) {
                node = first;
                first = last = null;
            } else {
                node = first;
                while (node.next != last) { //duyệt để lấy đến phần tử cuối
                    node = node.next;
                }
                last = node;
                node = node.next;
                last.next = null;
            }
        }
        return node;
    }

    public void print() {
        Node node = first;
        while (node != null) {
            System.out.print(node.data + "    ");
            node = node.next;
        }
        System.out.println("\n");
    }

    public static void main(String[] args) {
        LinkedList linkedList = new LinkedList();
        linkedList.insertFront(10);
        linkedList.insertFront(20);
        linkedList.insertFront(40);
        linkedList.insertBack(100);
        linkedList.print();
        Node myNode = linkedList.removeFront();
        linkedList.print();
        System.out.println("Thong tin node lay ve: " + myNode.data);
    }
}
