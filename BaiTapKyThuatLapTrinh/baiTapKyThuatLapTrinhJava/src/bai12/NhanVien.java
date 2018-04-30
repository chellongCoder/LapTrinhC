/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bai12;

/**
 *
 * @author Administrator
 */
public class NhanVien extends Nguoi{
    private String congViec;
    private String Phong;

    public void setCongViec(String congViec) {
        this.congViec = congViec;
    }

    public String getCongViec() {
        return congViec;
    }

    public void setPhong(String Phong) {
        this.Phong = Phong;
    }

    public String getPhong() {
        return Phong;
    }
    
    
}
