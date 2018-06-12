#include <stdio.h>
#include <stdlib.h>
//5.	Nhập vào 3 số kiểm tra đó có phải là 3 cạnh tam giác không. Nếu có thì đó là tam giác gì.
/*int main()
{
    int a,b,c;
    while (!(a+b>c && a+c>b && b+c>a))
    {
    printf("nhap vao 3 canh cua tam giac\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b>c && a+c>b && b+c>a)
    {
        if (a==b && b==c && a==c)
        {
            printf("day la tam giac deu\n");break;
        }
        else if (a==b || b==c || a==c)
        {
            printf("day la tam giac can\n");break;
        }
        else if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
        {
            printf("day la tam giac vuong\n");break;
        }
        else
        {
        printf("day la tam giac binh thuong\n");break;
        }
    }
    else
    {
        printf("day khong phai tam giac, moi ban nhap lai\n");
    }
    }
    return 0;
}*/
//6.	Nhập 1 số từ 0  9 rồi in ra cách viết của số đó. Vd: 9 dc viết là chín<theo 2 cách là if và switch>.
/* void main ()
{
    int a;
    do{
        printf("nhap vao so a\n");
        scanf("%d", &a);
        if (a<0 || a>9)
            printf("moi ban nhap lai\n");
    }while(a<0 || a>9);
    switch (a)
    {
    case 1: printf("day la  so mot\n");break;
    case 2: printf("day la so hai\n");break;
    case 3: printf("day la so ba\n");break;
    case 4: printf("day la so bon\n");break;
    case 5: printf("day la so nam\n");break;
    case 6: printf("day la so sau \n");break;
    case 7: printf("day la so bay\n"); break;
    case 8: printf("day la so tam\n");break;
    case 9: printf("day la so chin\n");break;
    }



    getchar();
    return 1000000000000000000000000000000000000000;
}*/
//7.	Viết chương trình nhập vào điểm 3 môn thi: Toán, Lý, Hóa của học sinh. Nếu tổng điểm >= 15 và không có môn nào dưới 4
//thì in kết quả đậu. Nếu đậu mà các môn đều lớn hơn 5 thì in ra
//lời phê "Học đều các môn", ngược lại in ra "Học chưa đều các môn", các trường hợp khác là "Thi hỏng".
/*
void main ()
{
    float a,b,c;
    printf("nhap vao diem 3 mon TOAN, LI, HOA\n");
    scanf("%f %f %f",&a, &b, &c);
    if (a+b+c>=15)
    {

         if (a>5 && b>5 && c>5)
        {
            printf("HOC DEU CAC MON \n");
        }
        else if (a>4 && b>4 && c>4)
        {
            printf("DAU\n");
        }
        else
        {
            printf("HOC CHUA DEU CAC MON\n");
        }
    }
    else
    {
        printf("THI HONG\n");
    }
    getchar();
    return 0;
} */

//8.	Viết chương trình xác định biến ký tự color rồi in ra thông báo
//- RED, nếu color = 'R' hoặc color = 'r'
//- GREEN, nếu color = 'G' hoặc color = 'g'
//- BLUE, nếu color = 'B' hoặc color = 'b'
//- BLACK, nếu color có giá trị khác
/*
void main ()

{

    char a;
    printf("nhap vao ki hieu mau\n");
    scanf("%c", &a);

    switch (a)  //khi thỏa mãn ddkien trong switch, cacsdong lệnh trong case sẽ đc thực hiện
    {
    case 'r': printf("red\n"); break;
    case 'b': printf("blue\n");break;
    case 'g': printf("green\n"); break;
    default : printf("black");break;


    }


    getchar();
    return 0;
}
*/ //9.	Nhập vào tháng và năm in ra số ngày trong tháng đó . <theo 2 cách là if và switch>.
/*
void main ()
{
    int nam, thang;
    do
{
printf("nhap vao thang / nam\n");
scanf("%d %d", &thang, &nam);
    if (thang>12 || thang<1)
    {
        printf("moi ban nhap lai\n");
    }
} while (thang>12 || thang<1 );
switch (thang)
{
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    {
    printf("thang %d nam %d co 31 ngay", thang,nam);
    } break;
    case 2: if (nam%4==0 && nam%100!=0 || nam%400==0)
    {
        printf("nam nhuan, thang 2 co 29 ngay"); break;
    }
    else
    {
        printf("thang 2 nam %d co 28 ngay",nam);break;
    }
    default: printf("thang %d nam %d co 30 ngay",thang,nam); break;
}

    getchar();
    return 0;
} */
//10.	Nhập vào  điểm tổng kết in ra
//xếp loại (1->4 là yếu, 5->7 TB, 7 ->8 khá, 9=>10 giỏi). <theo 2 cách là if và switch>.
/*

void main ()
{
    float diem;
    do
    {
    printf("diem=: ");
    scanf("%f", &diem);
    }while (diem<1 || diem>10);
    if (diem>=1 && diem<=4)
    {
        printf("hoc luc yeu\n");
    }
    else if (diem>=5 && diem<=7)
    printf("hoc luc trung binh\n");
    else if (diem>=7 && diem<=8)
        printf("hoc luc kha\n");
    else{printf("hoc luc gioi\n");}
    getchar();
    return 0;
}
*/
//11.	 Nhập vào số có 5 chữ số rồi tách nó thành 5 số sau đó tính tổng . vd: 98765 = 5,6,7,8,9  .
/*
void main ()
{
int n;
printf("nhap vao so co 5 chu so ");
scanf("%d", &n);
int a[99];
int i;
for (i=1; i<=5; i++)
{
    a[i]=n%10;
    n=n/10;                     // => int n;
                                    //scanf("%d",&n );
                                   // n=n/10;
                                   // printf("%d",n);

}
printf("tach so: ");
for (i=1; i<=5; i++)
{
    printf("%d ,", a[i]);
}
int tong=0;
for (i=1; i<=5; i++)
{
    tong+=a[i];
}
printf("Tong=: %d", tong);
*/

//12.	Nhập vào ngày tháng năm in ra dạng ngày/tháng/năm. Năm chỉ lấy 2 số cuối.
/*
int a,b,c;
printf("nhap vao ngay, thang, nam\n");
scanf(" %d %d %d", &a, &b ,&c);
c=c%100;
printf("%d / %d / %d",a,b,c);
*/

//11.	 Nhập vào số có 5 chữ số rồi tách nó thành 5 số sau đó tính tổng . vd: 98765 = 5,6,7,8,9  .
/*
int n;
printf("nhap vao so co 5 chu so ");
scanf("%d", &n);
int a[99];
int i;
for (i=1; i<=5; i++)
{
    a[i]=n%10;
    n=n/10;                     // => int n;
                                    //scanf("%d",&n );
                                   // n=n/10;
                                   // printf("%d",n);

}
printf("tach so: ");
for (i=1; i<=5; i++)
{
    printf("%d ,", a[i]);
}
int tong=0;
for (i=1; i<=5; i++)
{
    tong+=a[i];
}
printf("Tong=: %d", tong);
*/

//12.	Nhập vào ngày tháng năm in ra dạng ngày/tháng/năm. Năm chỉ lấy 2 số cuối.
/*
int a,b,c;
printf("nhap vao ngay, thang, nam\n");
scanf(" %d %d %d", &a, &b ,&c);
c=c%100;
printf("%d / %d / %d",a,b,c);
*/
//13.	Nhập vào 1 số kiểm tra đó là số âm hay dương, nếu là số dương kiểm tra đó có phải là số nguyên tố không ,
//nếu không phải số nguyên tố tìm tất cả các ước của số đó
/*
    int a;


printf("nhap vao so a\n");
scanf("%d", &a);

if (a>0)
{
    int i=2;
    if (a%i!=0)
    {
        i++;
    }
    while (i<=a)
    {
        if (a%i==0)
            else i++;
        break;

    }
}


    printf("cac uoc nguyen duong cua a la\n");
    int n;
    for (n=1; n<=a; n++)
    {
        if (a%n==0)
        {
            printf("%d ,",n);
        }
    }
/*   while (i<a)
    {

        if (a%i==0)
        {
            printf("%d khong la so nguyen to\n",a);break;
        }
        else i++;
    }
    while (i<a)
    {
        if (a%i!=0)
            i++;
    }
    printf("day la so nguyen to\n");



    printf("cac uoc nguyen duong cua a la\n");
    int n;
    for (n=1; n<=a; n++)
    {
        if (a%n==0)
        {
            printf("%d ,",n);
        }
    }

}
getchar();
    return 0;
    } */


//14.	Nhập ngày/tháng/năm in ra ngày trước đó và ngày sau ngày đó.
void main ()
{
int ngay,thang,nam,max;
do{
printf("nhap vao ngay;thang;nam \n");
scanf("%d %d %d", &ngay, &thang, &nam);
}while (ngay>31 || ngay<1 || thang>12 || thang<1);
switch (thang)
{
     case 4: case 6: case 9: case 11: max = 30;
    case 2: if (nam%100==0 && nam%400==0 || nam%4==0 && nam%100!=0)
    max = 28;
            else max = 29;
    default: max=31;
}
if (ngay==max)
{
    if(thang==12)
    {
        thang=1;
    ngay=1;
    printf("ngay mai: %d / %d / %d\n",ngay,thang,++nam);
    ngay=30;
    thang=12;
    printf("ngay hom qua: %d /%d / %d",ngay,thang,--nam);
    }
    else
    {
        ngay--;
        printf("ngay hom qua: %d / %d / %d\n", ngay, thang, nam);
        ngay=1;
        thang=thang+1;
        printf("ngay mai: %d / %d / %d\n",ngay, thang, nam);

    }
   // printf("ngay hom qua: %d /%d / %d",max,thang,nam);
}
else if (ngay==1)
{
    if (thang==1)
    {
        thang=12;
        ngay=31;
        printf("ngay hom qua: %d / %d / %d\n",ngay,thang,--nam);
        ngay=2;
        thang=1;
        printf("ngay mai: %d / %d / %d",ngay,thang,++nam);
    }
    else
    {
        ngay++;
        printf("ngay mai: %d / %d /%d\n",ngay, thang, nam);
        ngay=31;
        thang--;
        printf("ngay hom qua: %d / %d / %d\n", ngay , thang, nam);

    }
}
else
{
    ngay++;
    printf("ngay mai: %d / %d /%d\n", ngay, thang, nam);
    ngay=ngay-2;
    printf("ngay hom qua: %d / %d / %d", ngay, thang, nam);
}

    getchar();
    return 0;
    }


