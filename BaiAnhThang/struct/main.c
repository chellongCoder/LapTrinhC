#include <stdio.h>
#include <stdlib.h>
struct phanso {
    int tuso;
    int mauso;
};
int UCLN (int a, int b) {
    int du;
    while (b!=0) {
        du = a%b;
        a = b;
        b = du;
    }
    return a;
}
int BCNN (int a, int b) {
    int bc = a*b;
    int du;
    while (b!=0) {
        du = a%b;
        a = b;
        b = du;
    }
    bc = bc/a;
    return bc;
}
void nhap_phan_so (struct phanso *ps) {
    printf("nhao vao tu so:\n");
    scanf("%d",&ps->tuso);
    printf("nhap vao mau so: \n");
    scanf("%d",&ps->mauso);
}
void xuat_phan_so (struct phanso ps) {
    printf("%d/%d\n",ps.tuso, ps.mauso);
}
void tong (struct phanso ps1, struct phanso ps2) {
    int mauso = BCNN(ps1.mauso, ps2.mauso);
    int tu_so_tong = ps1.tuso*(mauso/ps1.mauso) + ps2.tuso*(mauso/ps2.mauso);
    printf("%d/%d + %d/%d = %d/%d\n",ps1.tuso, ps1.mauso, ps2.tuso, ps2.mauso, tu_so_tong,mauso);
}
int main()
{
    struct phanso ps1, ps2;
    printf("nhap phan so thu 1: \n");
    nhap_phan_so(&ps1);
    xuat_phan_so(ps1);
    printf("nhap phan so thu 2: \n");
    nhap_phan_so(&ps2);
    xuat_phan_so(ps2);
    tong(ps1, ps2);
    return 0;
}
