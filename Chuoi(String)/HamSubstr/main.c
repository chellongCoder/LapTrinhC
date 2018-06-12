#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int STRLEN(char s[])
{
	int dem = 0;
	while (s[dem] != '\0')
	{
		dem++;
	}
	return dem;
}

// SUBSTR(s, x, y) // Cắt chuỗi con trong đoạn [x, y] của chuỗi s

char* SUBSTR(char s[], int x, int y)
{
	char ketqua[100];
	int length = STRLEN(s);
	int idx = 0;
	int i;
	for( i = x; i <= y; i++)
	{
		ketqua[idx++] = s[i];
	}
	ketqua[idx] = '\0'; // Kết thúc chuỗi
	return ketqua;
}
int main()
{
	char s[] = "Vuong Tri Tai";
	char sub[100];
	strcpy(sub, SUBSTR(s, 10, 13));

	printf("\nsub = %s", sub);

	_getch();
	return 0;
}
