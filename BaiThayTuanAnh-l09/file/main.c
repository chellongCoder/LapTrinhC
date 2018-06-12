#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void TaoFile (char ten_file[]) {
    FILE *f;
    f = fopen(ten_file, "wt");
    if (f == NULL) {
        printf("co loi khi tao file %s\n", ten_file);
        return;
    }
    int x = rand();
    fprintf(f, "%-10d",x);
    fclose(f);
}
void DocFile (char ten_file[]) {
    int x;
    FILE *f;
    f = fopen(ten_file, "rt");
    if (f == NULL) {
        printf("co loi khi tao file %s\n", ten_file);
        return;
    }
    fscanf(f, "%d", &x);
    printf("%d",x);
}
void TaoMaTran (char ten_file[]) {
    FILE *f;
    f = fopen(ten_file, "wt");
    if (f == NULL) {
        printf("co loi khi tao file %s\n", ten_file);
        return 1;
    }
    int m =10, n= 8;
    int x;
    fprintf(f, "%d %d \n",m,n);
    int i,j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            x = rand();
            fprintf(f, "%-8d",x);
        }
        fprintf(f, "\n");
    }
    fclose(f);
}
void DocMaTran (char ten_file[]) {
    FILE *f;
    f = fopen(ten_file, "rt");
    if (f == NULL) {
        printf("co loi khi tao file %s\n", ten_file);
        return 1;
    }
    int m,n;
    fscanf(f, "%d %d", &m, &n);
    printf("m = %d, n = %d\n", m, n);
    int i,j,x;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            fscanf(f, "%d",&x);
            printf("%-8d",x);
        }
        printf("\n");
    }
}
int main()
{
    srand(time(NULL));
    char filename[] = "D:\\vanban.txt";
    //TaoFile(filename);
    //DocFile(filename);
    TaoMaTran(filename);
    DocMaTran(filename);
    return 0;
}
