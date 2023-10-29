#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *in, *out;
    char ch;
    
    in =fopen("in.txt","r");
    if (in == NULL)
    {
        puts("File read error");
        exit(1);
    }

    out = fopen("out.txt","w");
    if (out == NULL)
    {
        puts("File read error");
        exit(1);
    }

    do{
        ch = fgetc(in);
        fputc(ch-9, out);
    } while (ch != EOF);

    printf("\nEncryption process completed successfully.");
    printf("\nout.txt file is generated.");

    fclose(in);
    fclose(out);

return 0;
}
