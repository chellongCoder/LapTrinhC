#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int menu () {
    int chon;
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n+------+----[               MENU LUA CHON                        ]---+-------+");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n|----- + ----->          1. processing date data                 <-----------|");
    printf("\n|----- + ----->          2. character data                       <-----------|");
    printf("\n|----- + ----->          3. Quit                                 <-----------|");
    printf("\n+------+------------------------------------+----------+-------+-----+-------+");
    printf("\n\tBan chon muc nao : ");
    scanf("%d",&chon);
    return chon;
}

void Fuction1() {
    int day, month, year;
    printf("input day: ");
    scanf("%d",&day);
    printf("input month: ");
    scanf("%d",&month);
    printf("input year: ");
    scanf("%d",&year);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
            if (day>0 && day<=31) {
                printf("\ndate %d month %d year %d",day, month, year);
            }
            else {
                printf("\n khong phai ngay thang nam hop le");
            }
        }break;
        case 4: case 6: case 9: case 11: {
            if (day>0 && day <=30) {
                 printf("\ndate %d month %d year %d",day, month, year);
            }
            else {
                printf("\n khong phai ngay thang nam hop le");
            }
        }break;
        case 2: {
            if (day>0 && day<=29) {
                if (year%100!=0 && year%4==0 || year%400==0) {
                    if (day==29) {
                          printf("\ndate %d month %d year %d",day, month, year);
                          break;
                    }
                }
                  printf("\ndate %d month %d year %d",day, month, year);
            }
            else {
                printf("\nkhong phai ngay thang nam hop le");
            }
        }break;
        default: {
            printf("\nkhong phai ngay thang nam hop le");
        }break;

    }
}

void Fuction2() {
    char a,b;
    fflush(stdin);
    printf("enter a: ");
    scanf("%c",&a);
    fflush(stdin);
    printf("\ninput character b: ");
    scanf("%c",&b);
    char i;
    for (i=a; i<=b; i++) {
        printf("%-4d\n",i);
    }
}

void Quit () {

}
int main()
{
    char chon;
    do {
    int key=menu();
    switch (key) {
        case 1: {
            //Fuction1();
        }break;
        case 2: {
            Fuction2();
        }break;
        case 3: {

        }break;
    }
    printf("\nban co muon chon nua khong? ");
    scanf("%c",&chon);
    chon=getchar();
    }while (chon!='k');
    return 0;
}
