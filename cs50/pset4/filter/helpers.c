#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    double blue, green, red, color;
    for(int c=0; c<height; c++)
    {
        for(int d=0; d<width; d++)
        {
            blue = (double) image[c][d].rgbtBlue;
            green = (double) image[c][d].rgbtGreen;
            red = (double) image[c][d].rgbtRed;
            color = round((blue + green + red)/3.0);
            image[c][d].rgbtBlue = (int) color;
            image[c][d].rgbtGreen = (int) color;
            image[c][d].rgbtRed = (int) color;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    double blue, green, red, sepiaRed, sepiaGreen, sepiaBlue;
    for(int c=0; c<height; c++)
    {
        for(int d=0; d<width; d++)
        {
            blue = (double) image[c][d].rgbtBlue;
            green = (double) image[c][d].rgbtGreen;
            red = (double) image[c][d].rgbtRed;

            sepiaRed = round(0.393 * red + 0.769 * green + 0.189 * blue);
            sepiaGreen = round(0.349 * red + 0.686 * green + 0.168 * blue);
            sepiaBlue = round(0.272 * red + 0.534 * green + 0.131 * blue);

            if (sepiaRed > 255)
                image[c][d].rgbtRed = 255;
            else
                image[c][d].rgbtRed = (int) sepiaRed;
            
            if (sepiaGreen > 255)
                image[c][d].rgbtGreen = 255;
            else
                image[c][d].rgbtGreen = (int) sepiaGreen;
            
            if (sepiaBlue > 255)
                image[c][d].rgbtBlue = 255;
            else
                image[c][d].rgbtBlue = (int) sepiaBlue;            
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    int blue, green, red, last;
    for(int c=0; c<height; c++)
    {
        last = 1;
        for(int d=0; d<width; d++)
        {
            if (d >= (width-last))
                break;

            blue = image[c][d].rgbtBlue;
            green = image[c][d].rgbtGreen;
            red = image[c][d].rgbtRed;

            image[c][d].rgbtBlue = image[c][width-last].rgbtBlue;
            image[c][d].rgbtGreen = image[c][width-last].rgbtGreen;
            image[c][d].rgbtRed = image[c][width-last].rgbtRed;

            image[c][width-last].rgbtBlue = blue;
            image[c][width-last].rgbtGreen = green;
            image[c][width-last].rgbtRed = red;

            last++;            
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    double totalRed = 0, totalBlue = 0, totalGreen = 0, grid=0;
    RGBTRIPLE newImage[height][width];
    for(int c=0; c<height; c++)
    {
        for(int d=0; d<width; d++)
        {
            totalRed = 0;
            totalBlue = 0;
            totalGreen = 0;
            grid = 0;
            for( int c1 = c-1; c1 <= c+1; c1++ )
            {
                for(int d1 = d-1; d1 <= d+1; d1++)
                {
                    if( (c1 >= 0 && c1 <= height-1) && (d1 >= 0 && d1 <= width-1) )
                    {
                        totalBlue += image[c1][d1].rgbtBlue;
                        totalGreen += image[c1][d1].rgbtGreen;
                        totalRed += image[c1][d1].rgbtRed;
                        grid++;
                    }
                }
            }
            newImage[c][d].rgbtBlue = (int) round(totalBlue/grid);
            newImage[c][d].rgbtGreen = (int) round(totalGreen/grid);
            newImage[c][d].rgbtRed = (int) round(totalRed/grid);
        }
    }

    for(int c=0; c<height; c++)
    {
        for(int d=0; d<width; d++)
        {
            image[c][d].rgbtBlue = newImage[c][d].rgbtBlue;
            image[c][d].rgbtGreen = newImage[c][d].rgbtGreen;
            image[c][d].rgbtRed = newImage[c][d].rgbtRed;
        }
    }
    return;
}