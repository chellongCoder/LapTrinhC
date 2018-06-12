#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


//1.	Nhập 5 phần tử  vào 1 mảng rùi in chúng ra.
/*
void Nhapmang(int a[], int n)
{
    printf("cac phan tu trong mang la\n");
    int i;
    for (i=1; i<=5; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
    void Xuatmang(int a[], int n)
    {
        int i;
        for (i=1; i<=5; i++)
        {
           printf("a[%d]=%d ,",i,a[i]);
        }
    }
*/
void Nhapmang (int a[99], int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d", &a[i]);
    }
}
void Nhapdensoam (int a[], int n)
{
    int i;
    for (i=1; i<=n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d", a[i]);
        if (a[i]<0)
            break;
    }
    for (i=1; i<=n; i++)
    {
        printf("a[%d]= %d\n",i, a[i]);
        if (a[i]<0)
            break;
    }
}
void Xuatmang (int a[99], int n)
{
    int i;

    //printf("xuat ra n phan tu cua mang\n");
    for (i=1; i<=n; i++)
    {
    printf("a[%d]= %d,\t",i,a[i]);
    }
}
//3.	Nhập vào mảng cho tới khi phân tử nhập là -1. Hiển thị mảng vừa nhập.
void nhapden_1 (int a[], int n)
{
    int i;

    for (i=1; i<=n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d", &a[i]);
        if (a[i]==-1)
            break;
    }
    for (i=1; i<=n; i++)
    {
        if (a[i]==-1)
            break;
    printf("a[%d]= %d\n", i,a[i]);
    }
}
//5.	Nhập vào 1 mảng rùi in các số chẵn trên 1 dòng, số lẻ trên 1 dòng
void inchanle (int a[], int n)
{
    int i;
    printf("\nso chan la\n");
    for (i=1; i<=n; i++)
    {
        if (a[i]%2==0)
            printf("a[%d]= %d\t",i,a[i]);
    }
    printf("\nso le la\n");
    for (i=1; i<=n; i++)
    {
        if (a[i]%2!=0)
        {
            printf("a[%d]= %d\t",i,a[i]);
        }
    }
}
//6.	Nhập vào mảng n phần tử với n  nhập từ bàn phím in mảng.
//Sau đó sắp xếp theo tăng dần. in chúng ra.
void sapxeptang (int a[], int n)
{
    int i,j;
    int tam;
    for (i=1; i<=n-1; i++)
    {
        for (j=i+1; j<=n; j++)
        {
            if (a[i]>a[j])
            {
                tam=a[i]; //lúc này biến tạm = a[i]
                a[i]=a[j]; // sau đóa a[i] bằng giá trị của a[j]; ví dụ a[i]=5; a[j]=4
                            //thì sau đó a[i] sẽ có giá trị là 4
                a[j]=tam; // bây giờ a[i] lại mang giá trị của a[i] vì ở trên biến tam=a[i]
            }
        }
    }
    printf("\nphan tu sau khi sap xep la\n");
    for (i=1; i<=n; i++)
    {
        printf("%d\t", a[i]);
    }
}
//7.	Nhập vào mảng n phần tử với n  nhập từ bàn phím in mảng.
//Sau đó sắp xếp theo giảm dần. in chúng ra.
void sapxepgiam (int a[], int n)
{
    int i,j,tam;
    for (i=1; i<=n-1; i++)
    {
        for (j=i+1; j<=n; j++)
        {
            if (a[i]<a[j])
            {
            tam=a[i];
            a[i]=a[j];
            a[j]=tam;
            }
        }
    }
    printf("\nsap xem giam cac phan tu la\n");
    for (i=1; i<=n; i++)
    {
        printf("%d, ",a[i]);
    }
}
//8.	Nhập vào 1 mảng bất kỳ tìm giá trị max, min và
//đếm có bao nhiêu số max, min và tất cả vị trí max, min trong mảng.
void tim_max_min (int a[], int n)
{
    int i;
    int max, min;
    max=a[1];
    for (i=1; i<=n; i++)
    {

        if (a[i]>max)
            max=a[i];
    }
    printf("\ngia tri lon nhat la: %d",max);
    int x,dem=0;
    for (i=1; i<=n; i++)
    {
        if (a[i]==max)
            {
                x==a[i];
                dem++;
            }
    }
    printf("\nvay co %d gia tri lon nhat trong mang la %d",dem,max);
    min=a[1];
    for (i=1; i<=n; i++)
    {
        if (a[i]<min)
            min=a[i];
    }
    printf("\ngia tri nho nhat la %d",min);
    int tam=0;
    for (i=1; i<=n; i++)
    {
        if (a[i]==min)
        {
            x==a[i];
            tam++;
        }
    }
    printf("\nco %d gia tri nho nhat tronng mang la %d",tam,min);
}
//9.	Nhập vào 1 mảng bất kỳ sau đó tìm tất cả các số chia hết cho 4 và tính trung bình cộng của các số  ấy.
// tính trung bình cộng tất cả các số chẵn, số lẽ.
void timsochiahet4 ( int a[], int n)
{
    printf("\ncac so chia het cho 4 la: ");
    int i,dem=0;
    for (i=1; i<=n; i++)
    {
        if (a[i]%4==0)
        {
            dem++;
            printf("a[%d]= %d\n",i,a[i]);
        }
    }
    printf("\nco %d so chia het cho 4\n",dem);
    //tính trung bình cộng tất cả các số chẵn
    int s;
    s=0;
    int dem1=0;
    for (i=1; i<=n; i++)
    {
        if (a[i]%2==0)
        {
            dem1++;
            s+=a[i];
        }
    }
    printf("trung binh cong ca so chan la %d\n",s/dem1); //số lẻ cũng tương tự
    //tính trung bình cộng của các số ấy.
    s=0;
    for (i=1; i<=n; i++)
    {
        s+=a[i];
    }
    printf("trung binh cong cac so la %d\n",s/n);
}
// kiểm tra xem mảng có đối xứng hay không vd: (1,2,3,4,5,4,3,2,1)
void ktradoixung (int a[], int n)
{
    int i;
    int ktra=1;
    for (i=1; i<=n/2; i++)
    {
        if (a[i]!=a[n-i+1])
        {
            ktra=0;
            break;
        }
    }
    if (ktra==1) printf("\nday la mang doi xung\n");
    else printf("\nday khong la mang doi xung\n");
}
//12.	Nhập vào 1 mảng bất kỳ sau đó đổi chiều của mảng. vd: a={1,2,3,4,5,6,7}  a= {7,6,5,4,3,2,1}
void doichieumang (int a[], int n) {
    int i,tam;
    printf("\nmang doi chieu la \n");
    for (i=1; i<=n/2; i++) {
        tam=a[i];
        a[i]=a[n-i+1];

        a[n-i+1]=tam;

        printf("%d ",a[i]);
    }
    for (i=n/2+1; i<=n; i++) {
        printf("%d ",a[i]);
    }
}
 // THÊM PHẦN TỦ VÀO MẢNG
    void ThemPhanTu (int i, int &n, int ViTriThem, int PhanTuThem) {
        for (i=n; i>=ViTriThem+1; i--) {
            a[n]=a[n-i];
        }
        a[ViTriThem]=PhanTuThem;
        n++; // hiện tại nhập vào đang có n-1 phần tử nên cho chạy từ n thì phải thêm 1 vị trí nữa
    }


void main()
{
    int a[99];
    int n;
        printf("nhap vao n phan tu\n");
        scanf("%d",&n);
        Nhapmang(a,n);
        printf("xuat ra n phan tu cua mang\n");
        Xuatmang(a,n);
    //nhapden_1(a,n);
    //Nhapdensoam(a,n);
    //inchanle(a,n);
    //sapxeptang(a,n);
    //sapxepgiam(a,n);
    //tim_max_min(a,n);
    //timsochiahet4(a,n);
    //ktradoixung(a,n);
   // doichieumang(a,n);
    int ViTrithem, PhanTuThem;
    do{
        printf("nhap vao vi tri them (0=>%d) ",n);
        scanf("&d",&ViTrithem);
    }while(ViTrithem<0 || ViTrithem>n);
        printf("nhap vao phan tu them ");
        scanf("%d", PhanTuThem);
        ThemPhanTu(a,&n,ViTrithem,PhanTuThem);
        printf("mang sau khi them phan tu %d la", PhanTuThem);
        Xuatmang(a,n);
        getchar();
    return 0;
}

// nhập vào 2 mảng và in ra các phần tử khác nhau trong 2 mảng





