#include <stdio.h>
#include <stdlib.h>

//hiển thị nôi dung tệp
int main()
{
    char in_name[80];
    FILE *in_stream;
    int ch;
    printf("DISPLAY FILE: ");
    fflush(stdin);
    gets(in_name);
    in_stream = fopen(in_name,"w+");
    fprintf(in_stream,"sdfsdggtwefsdfxcvxv sdfsdgs srwersdfgsx");
    fseek(in_stream,0,0);
    if (in_stream == NULL) {
        fprintf(stderr,"open of %s for reading failed",in_name);
        perror("because");
        return 1;
    }
    while (!feof(in_stream)) {
        ch = fgetc(in_stream);
        printf("%c",ch);
    }
    fclose(in_stream);
    return 0;
}
