#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //DÙNG CON TRỎ THAM CHIẾU TRÊN 1 Ô NHỚ
/*
    int a=5; // khai báo biến a mang giá trị 5
    int *b; // khai báo con trỏ b.
        b=&a; // cho con trỏ b trỏ tới vị trí a, toán tử & là hướng tới địa chỉ ô nhớ

    //ngoài ra có thể viết gộp như sau int *b=&a;
    int *c;
        c=b; // vì 2 con trỏ thực chất đã là 2 địa chỉ nên không cần toán tử &
        (*c)--; // c trỏ tới b, b lại trỏ tới a nên khi 1 trong 3 phần tử thay đổi kéo theo cả 3 thay đổi
        printf("gia tri cua a la %d \n",a);
        printf("dia chi cua a la %p \n",&a);
        printf ("-----------------------------");
        printf("gia tri cua con tro b la %d\n", *b);
        printf("dia chi cua con tro b la %p\n",&b);
        printf("mien gia tri cua con tro b la %p\n",b);
        printf("-------------------------------");
        printf("gia tri cua con tro c la %d\n",*c);
        printf("dia chi cua con tro c la %p\n",&c);
        printf("mien gia tri cua con tro c la %p",c);
*/
    // CON TRỎ VÔ KIỂU
/*
    int a=5;
    void *b; // con trỏ vô kiểu, có thể trỏ tới mọi kiểu dữ liệu nhưng phải ép kiểu khi dùng
        b=&a;
        (*(int *)b)--;
        printf("gia tri cua a la %d\n",a);
        printf("dia chi cua a la %d\n",&a);
        printf("gia tri cua con tro *b la %d\n", *(int *)b);
        printf("dia chi cua con tro b la %d\n",&b);
        printf("mien gia tri cua con tro b la %d\n",b);
 */

    // CẤP PHÁT, TRẢ VỀ, GIẢI PHÓNG CON TRỎ
/*
    int *a;
    int *b;
    int *c;
        a= (int *)malloc(sizeof (int *)); // cấp phát con trỏ, sizeof int là vì kiểu int có 4 bytes
        c= (int *)malloc(40); //40 tương đương 10 số nguyên vì mỗi số nguyên kiểu int là 4 bytes
        printf("gia tri cua con tro a la %d\n",*a);
        printf("dia chi cua con tro a la %d\n",a);
        b=(int *)calloc(1, sizeof (int *));
        printf("dia chi cua con tro b la %d\n",b);
        printf("gia tri cua con tro b la %d\n", *b);
        printf("gia tri cua c la %d\n",*c);
    int sum=6 + *b;
        printf("%d\n",sum);
        free(a);
        free(b);
*/

    int *a;
    int n;

        printf("nhap vao n phan tu ");
        scanf("%d", &n);
        a=(int*)malloc(n*sizeof(int*));
        printf("cac phan tu cua mang a la\n");
        nhapmang(a,n);
        printf("xuat ra cac phan tu trong mang\n");
        xuatmang(a,n);
        tinhtong(a,n);
        sapxepgiam(a,n);
        printf("mang a sau khi sap xep giam la\n");
        xuatmang(a,n);
    int ViTriThem, PhanTuThem;
    do {
        printf("\nnhap vao vi tri them: ");
        scanf("%d", &ViTriThem);
    }while(ViTriThem<0);
        printf("\n\nnhap vao phan tu tu them ");
        scanf("%d",&PhanTuThem);
        ThemPhanTu(a,n,ViTriThem,PhanTuThem);
        xuatmang1(a,n);
    int ViTriXoa;
    do {
        printf("\n\nnhap vao vi tri xoa: ");
        scanf("%d", &ViTriXoa);
    }while(ViTriXoa<0);
        XoaPhanTu(a,n,ViTriXoa);
        xuatmang2();

/*
        printf("giai phuong trinh bac 2 bang con tro\n");
    float a,b,c,x1,x2,x;
//    float *x1, *x2, *x;
        printf("nhap vao so a ");
        scanf("%f", &a);
        printf("nhap vao so b ");
        scanf("%f", &b);
        printf("nhap vao so c ");
        scanf("%f",&c);
        float s;
            s=ptb2(a,b,c,x1,x2,x);
        if (s==0) {
            printf("phuong trinh vo nghiem\n bam phim bat ki de out\n");
            getch();
            exit(0);

        }
        if (s==-1) {
            printf("phuong trinh co nghiem duy nhat\n x=%d\n nhan phim bat ki de ket thuc",x );
            getch();
            exit(0);

        }
        if (s==1) {
            printf("phuong trinh co 2 nghiem phan biet x1=%d    x2=%d\n",x1,x2);

        }
*/

        free(a);

    return 0;
}
    void nhapmang (int *a, int n) {
        int i;
        for (i=0; i<n; i++) {
            printf("a[%d]= ",i);
            scanf("%d", &*(a+i));
        }
    }
    void xuatmang (int *a, int n) {
        int i;
        for (i=0; i<n; i++) {
            printf("%4d" ,*(a+i)); // kiểu viết a[i] <=> *(a+i) <=> *(a++)
        }
    }
    void tinhtong (int *a, int n) {
        int i;
        int sum=0;
        for (i=0; i<n; i++) {
            sum=sum+a[i];
        }
        printf("\ntong= %d\n",sum);
    }
    void sapxepgiam (int *a, int n) {
        int i,j;
        int tam;
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                if (a[i]>a[j]) {
                    tam=a[i];
                    a[i]=a[j];
                    a[j]=tam;
                }
            }
        }
    }
/*
    int ptb2(){
        float a,b,c, x1,x2,x;
      //  float a,b,c, *x1, *x2, *x;
        float denta=b*b-4*a*c;
        double sqrt();
        if (a==0) {
            if (b==0) {
                if (c==0) {
                    printf("phuong trinh vo so nghiem\n");
                }
                else {
                    printf("phuong trinh vo nghiem\n");
                }
            }
            else {
                printf("phuong trinh co nghiem duy nhat la %f\n", -c/b);
            }
            exit(0);
        }
        if (denta<0) {
            return(0);
        }
        if (denta>0) {
            return(1);
        }
        if (denta==0) {
            return(-1);
        }
            x1= (-b-(sqrt(denta)))/(2*a);
            x2= (-b+(sqrt(denta)))/(2*a);
            x=(-b)/2*a;
    }
*/
    void ThemPhanTu (int *a, int n, int VitriThem, int PhanTuThem) {
        (int *)realloc(a, (n+1)*sizeof(int *));
        int i;
        for (i=n; i>VitriThem; i--) {
            a[i]=a[i-1];
        }
        a[VitriThem]=PhanTuThem;
    }
    void xuatmang1(int *a, int n) {
        int i;
        for (i=0; i<=n; i++) {
            printf("%4d  ",a[i]);
        }
    }
    void XoaPhanTu (int *a, int n, int ViTriXoa) {
        int i;
        for (i=ViTriXoa; i<n; i++) {
            a[i]=a[i+1];
        }
        (int *)realloc(a,n*sizeof(int *));
    }
    void xuatmang2(int *a, int n) {
        int i;
        for (i=0; i<n-1; i++) {
            printf("%4d  ",a[i]);
        }
    }



