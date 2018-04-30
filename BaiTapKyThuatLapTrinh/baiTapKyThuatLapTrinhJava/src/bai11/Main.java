/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bai11;

import java.util.Scanner;

/**
 *
 * Câu 11:                            
1. Chon 1 de Thao tac voi HinhVuong
2. Chon 2 de Thao tac voi HinhCN
3. Chon 3 de Ket thuc
* - chương trình được tổ chức gồm ít nhất 2 lớp là HinhVuong và HinhCN
* - khi người dùng chọn 1 thì thực hiện: nhập vào cạnh, tính chu vi, diện tích, vẽ hình vuông theo cạnh
* đã làm tròn, (ví dụ cạnh 1,6 thì vẽ như sau: )
* * *
* * *
* - khi người dùng chọn 2 thì thực hiện: nhập vào cạnh, tính chu vi, diện tích, vẽ hình vuông theo cạnh
* đã làm tròn, (ví dụ dài=3, rộng=1,7 thì vẽ như sau: )
* * * *
* * * *
* 
 */
public class Main {
    static int Menu() {
        System.out.println("==========================");
        System.out.println("1. thao tác với hình vuông");
        System.out.println("2. thao tác với hình chữ nhật");
        System.out.println("3. kết thúc");
        System.out.println("==========================");
        System.out.print("chon:> ");
        int choice = Integer.parseInt(new Scanner(System.in).nextLine());
        return choice;
    }
    
    static void ketThuc() {
        System.out.println("bye bye");
        System.exit(0);
    }
    
    static void hinhVuong() {
        System.out.print("nhập cạnh hình vuông:> ");
        float canh = Float.parseFloat(new Scanner(System.in).nextLine());
        System.out.printf("chu vi hình vuông: %.2f", (4*canh));
        System.out.println();
        System.out.printf("diện tich hình vuông: %.2f", (canh*canh));
        System.out.println();
        for(int i = 0; i < Math.round(canh); i++) {
            for(int j = 0; j < Math.round(canh); j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    
    static void hinhChuNhat() {
        float height, width;
        System.out.print("nhập chiều dài:> ");
        height = Float.parseFloat(new Scanner(System.in).nextLine());
        System.out.print("nhập chiều rộng:> ");
        width = Float.parseFloat(new Scanner(System.in).nextLine());
        System.out.printf("chu vi hình chữ nhật: %.2f", 2*(height+width));
        System.out.println();
        System.out.printf("diện thích hình chữ nhật là: %.2f", (height*width));
        System.out.println();
        for(int i = 0; i < Math.round(height); i++) {
            for(int j = 0; j < Math.round(width); j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    
    public static void main(String[] args) {
        int choice;
        do {
            choice = Menu();
            switch(choice) {
                case 1: hinhVuong(); break;
                case 2: hinhChuNhat(); break;
                case 3: ketThuc(); break;
                default: System.out.println("mời bạn chọn lại!");
            }
        }while(true);
    }
}
