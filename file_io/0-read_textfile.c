#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"










ssize_t read_textfile(const char* filename, size_t letters)
{

    int File_Descriptor;
    ssize_t Bytes_Read, Bytes_written;
    char* Buffer;


    if (filename == NULL)
        return (0);

    File_Descriptor = open(filename, O_RDONLY);

    if (File_Descriptor == -1)
        return(0);


    Buffer = malloc(sizeof(char) * letters);

    if (Buffer == NULL)
    {
        close(File_Descriptor);
        return (0);
    }


    Bytes_Read = read(File_Descriptor, Buffer, letters);

        if (Bytes_Read == -1)
        {
            free(Buffer);
            close(File_Descriptor);
            return (0);

        }

        Bytes_written = write(STDOUT_FILENO, Buffer, Bytes_Read);
        if (Bytes_written == -1 || Bytes_written != Bytes_Read)
        {
            free(Buffer);
            close(File_Descriptor);
            return (0);
        }

        free(Buffer);
        close(File_Descriptor);

        return (Bytes_written);

}
