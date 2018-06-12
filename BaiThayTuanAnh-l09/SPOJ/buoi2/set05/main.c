#include <stdio.h>
/*
đảo byte
Input
Số nguyên không âm a được cho ở dạng hexa (không có tiền tố "0x")
0x00 <= a <= 0x0FFFFFFF

Ghi chú: Để nhập số nguyên ở dạng hexa thay vì dạng thập phân, trong câu lệnh scanf() cần dùng đặc tả "x" thay cho đặc tả "d".

Output
Hai dòng.

Dòng 1: Giá trị đã nhập vào ở dạng hexa đủ 8 digit cùng với tiền tố 0x, một dấu cách, một dấu ~, một dấu cách, giá trị đã nhập vào ở dạng thập phân với 10 vị trí (không có chữ số 0 phía trước)

Dòng 2: Giá trị dạng hexa của a sau khi đảo trật tự byte cùng với tiền tố 0x, một dấu cách, một dấu ~, một dấu cách, giá trị sau khi đảo byte ở dạng thập phân với 10 vị trí (không có chữ số 0 phía trước). Sau khi in xong dòng thứ 2 này thì không xuống dòng.

Ghi chú: Để tránh sai sót khi in số nguyên không dấu, trong hàm printf() cần dùng đặc tả "u" thay cho đặc tả "d". Nếu không làm điều này thì có thể số dương sẽ bị in ra thành số âm (nếu bít cao có giá trị bằng 1).
*/
int main()
{
    int a;
    scanf("%x",&a);
    printf("0x%08x ~ %10u\n",a,a);
    a=(a<<24) | ((a<<8)&0x00FF0000) | ((a>>8)&0x0000FF00) | ((a>>24)&0x000000FF);
    printf("0x%08x ~ %10u",a,a);
    return 0;
}
