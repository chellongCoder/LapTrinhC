/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bai12;

import com.sun.javafx.geom.Vec2d;
import java.text.ParseException;
import java.util.List;
import java.util.Scanner;
import java.util.Vector;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.regex.Pattern;

/**
 *
 * @author Administrator
 */
public class Main {

    static int Menu() {
        System.out.println("===================================");
        System.out.println("1. hiển thi danh sách giáo viên");
        System.out.println("2. hiển thị danh sách nhân viên");
        System.out.println("3. kết thúc");
        System.out.println("===================================");
        System.out.println("chon:> ");
        int choice = Integer.parseInt(new Scanner(System.in).nextLine());
        return choice;
    }

    static void Nhap(List<GiaoVien> list) {
        int check = 1;
        Scanner sc = new Scanner(System.in);
        do {
                GiaoVien gv = new GiaoVien();
                System.out.println("nhập họ tên: ");
                gv.setHoTen(sc.nextLine());
                boolean c = false;
                do {
                    System.out.println("nhập ngày sinh: ");
                    try {
                         gv.setNgaySinh(gv.ft.parse(sc.nextLine()));
                    } catch (Exception e) {
                        c = true;
                    }
                } while (c);
                gv.setGioiTinh(true);
                System.out.println("nhập chuyên nganh: ");
                gv.setChuyenNganh(sc.nextLine());
                list.add(gv);
                System.out.println("ban muon nhap them khong (0 or 1):> ");
                check = Integer.parseInt(sc.nextLine());
        } while (check == 1);

        hienThi(list);
    }

    static void hienThi(List<GiaoVien> list) {
        System.out.printf("%-20s %-30s %-20s %-20s\n", "họ tên", "ngày sinh", "giới tính", "chuyên ngành");
        for (int i = 0; i < list.size(); i++) {
            System.out.printf("%-20s %-20s %-20s %-20s\n", list.get(i).getHoTen(), list.get(i).getNgaySinh(), list.get(i).getGioiTinh(), list.get(i).getChuyenNganh());
        }
    }

    public static void main(String[] args) {
        int choice;
        List<GiaoVien> listGiaoVien = new Vector<>();
        List<NhanVien> listNhanVien = new Vector<>();
        do {
            choice = Menu();
            switch (choice) {
                case 1:
                    Nhap(listGiaoVien);
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    System.out.println("mời bạn nhập lại");
            }
        } while (true);
    }
}
