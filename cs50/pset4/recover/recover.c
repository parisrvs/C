#include <stdio.h>

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        fprintf(stderr, "usage: ./recover filename\n");
        return 1;
    }
    FILE* cardraw = fopen(argv[1], "r");
    if(cardraw == NULL)
    {
        fprintf(stderr, "could not open %s\n", argv[1]);
        return 2;
    }
    unsigned char buffer[512];
    FILE* pictures = NULL;
    int filefound = 0, filenumber = 0;
    while(fread(buffer, 512, 1, cardraw) == 1)
    {
        if(buffer[0]==0xff && buffer[1]==0xd8 && buffer[2]==0xff && (buffer[3] & 0xf0)==0xe0)
        {
            if(filefound == 1)
                fclose(pictures);
            else
                filefound = 1;
            char filename[8];
            sprintf(filename, "%03d.jpg", filenumber);
            pictures = fopen(filename, "a");
            filenumber++;
        }
        if(filefound == 1)
            fwrite(buffer, 512, 1, pictures);
    }
    fclose(cardraw);
    fclose(pictures);
    return 0;
}