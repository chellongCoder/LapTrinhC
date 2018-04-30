/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bai12;

import java.text.SimpleDateFormat;
import java.util.Date;

/**
 *
 * @author Administrator
 */
public class Nguoi {
    public SimpleDateFormat ft = new SimpleDateFormat("yyyy-MM-dd");
    private String hoTen;
    private Date ngaySinh;
    private boolean gioiTinh;

    public void setHoTen(String hoTen) {
        this.hoTen = hoTen;
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setNgaySinh(Date ngaySinh) {
        this.ngaySinh = ngaySinh;
    }

    public Date getNgaySinh() {
        return ngaySinh;
    }

    public void setGioiTinh(boolean gioiTinh) {
        this.gioiTinh = gioiTinh;
    }
    
    public boolean getGioiTinh() {
        return gioiTinh;
    }
    
    
}
