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
public class Node {
    int data;
    Node next;
    int a[] = null;
    
    public Node(int data){
        this.data=data;
    }

    public Node(int data, Node node){
        this.data=data;
        this.next=node;
    }
}
