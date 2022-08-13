// Detects if a file is a JPEG

#include <stdint.h>
#include <stdio.h>

// void filter(int height, int width, RGBTRIPLE image[height][width]);

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Check usage
    if (argc != 2)
    {
        return 1;
    }

    // Open file
    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        return 1;
    }

    // Read first three bytes
    BYTE bytes[3];
    fread(bytes, sizeof(BYTE), 3, file);

    // Check first three bytes
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Yes, possibly\n");
    }
    else
    {
        printf("No\n");
    }

    // Close file
    fclose(file);
}

// First, we define a BYTE as 8 bits, so we can refer to a byte as a type more easily in C.
// Then, we'll read from a file with a function called fread.
// We can compare the first three bytes (in hexadecimal) to the three bytes required to begin a JPEF file.
// If they're the same, then our file is likely to be a JPEG file (though, other types of files may still begin with those bytes).
// But if they're not the same, we know it's definitely not a JPEG file.

// It turns out that BMP files, another format for images, have even more bytes in its header, or beginning of the file.

// Image filter that only shows the color red:
/*
#include "helpers.h"

// Only let red through
void filter(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtBlue = 0x00;
            image[i][j].rgbtGreen = 0x00;
        }
    }
}

// Here, we have a loop that iterates over all the pixels in a two-dimensional array,
// and sets the blue and green values to 0.
*/

