#include "helpers.h"
#include <math.h>
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // avg variable of BYTE type to store the average of the red, green and blue values of each pixel,
    BYTE avg;
    // declaring a RGBTRIPLE pointer to easily modify the contents of the passed image directly,
    RGBTRIPLE *pixel;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            pixel = &image[i][j];
            //dividing by 3.0 to convert the answer to float for better precision,
            avg = round((pixel->rgbtRed + pixel->rgbtGreen + pixel->rgbtBlue) / 3.0);

            // using dereferencing to assign the average values to the image,
            pixel->rgbtRed = avg;
            pixel->rgbtGreen = avg;
            pixel->rgbtBlue = avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // using integers to calculate the sepia values because they may go over 255 which will be out
    // of bounds for the BYTE data type,
    int sepiaRed, sepiaGreen, sepiaBlue;
    BYTE r, g, b;
    // declaring a constant of type BYTE to use later to cap the sepia values at 255,
    const BYTE max = 255;
    // declaring a RGBTRIPLE pointer for direct assignment of RGB values,
    RGBTRIPLE *pix;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            pix = &image[i][j];

            r = pix->rgbtRed;
            g = pix->rgbtGreen;
            b = pix->rgbtBlue;

            // using the constant max defined earlier to cap the sepia values,
            sepiaRed = round(0.393 * r + 0.769 * g + .189 * b);
            pix->rgbtRed = (sepiaRed <= max) ? sepiaRed : 255;

            sepiaGreen = round(0.349 * r + 0.686 * g + .168 * b);
            pix->rgbtGreen = (sepiaGreen <= max) ? sepiaGreen : 255;

            sepiaBlue = round(0.272 * r + 0.534 * g + .131 * b);
            pix->rgbtBlue = (sepiaBlue <= max) ? sepiaBlue : 255;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // declaring an RGBTRIPLE buffer to store an entire row of image at a time,
    RGBTRIPLE row[width];
    for (int i = 0; i < height; i++)
    {
        // loop to swap an entire row of the image array and store the swapped values in the buffer,
        for (int j = width - 1, k = 0; j > -1; j--, k++)
        {
            row[k] = image[i][j];
        }

        // loop to assign the swapped array from the buffer back into the original image and therefore
        // swapping or "reflecting" the image,
        for (int j = 0; j < width; j++)
        {
            image[i][j] = row[j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    int rsum = 0, gsum = 0, bsum = 0;
    BYTE ravg, gavg, bavg, r, g, b;
    RGBTRIPLE *pix, img_cpy[height][width];

    // copying the original image into a separate array to use later,
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img_cpy[i][j].rgbtRed = image[i][j].rgbtRed;
            img_cpy[i][j].rgbtGreen = image[i][j].rgbtGreen;
            img_cpy[i][j].rgbtBlue = image[i][j].rgbtBlue;
        }
    }

    // main loop to iterate over the copied image and average the RGB values of the pixels and
    // assign the averages back to the original image array,
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            pix = &image[i][j];
            float count = 0.0;

            // loop to calculate the average of RGB values of 3x3 blocks of pixels,
            for (int x = i - 1; x <= i + 1; x++)
            {
                if (x < 0 || x > height - 1)
                {
                    continue;
                }
                for (int y = j - 1; y <= j + 1; y++)
                {
                    if (y < 0 || y > width - 1)
                    {
                        continue;
                    }
                    rsum += img_cpy[x][y].rgbtRed;
                    gsum += img_cpy[x][y].rgbtGreen;
                    bsum += img_cpy[x][y].rgbtBlue;
                    count += 1.0;
                }
            }
            ravg = round(rsum / count);
            gavg = round(gsum / count);
            bavg = round(bsum / count);
            pix->rgbtRed = ravg;
            pix->rgbtGreen = gavg;
            pix->rgbtBlue = bavg;
            rsum = 0;
            gsum = 0;
            bsum = 0;
        }
    }
    return;
}
