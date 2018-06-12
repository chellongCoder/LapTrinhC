#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void sinh_so(FILE* stream)
{
    srand(time(NULL));
    int n=rand();
    fprintf(stream, "%d", n);

}
int doc_so(char* ten_file)
{
    int n;
    FILE *f=fopen;

    return n;
}

int main()
{
    char *file_name="D:\\songuyen.txt";
    FILE *fp;
    fp = fopen(file_name, "wt");
    sinh_so(fp);
    fclose(fp);

        doc_so(file_name);
        return 0;



}
