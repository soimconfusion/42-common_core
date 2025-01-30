#ifndef FRACTOL_H
# define FRACTOL_H


#include <math.h> // complex numbers...
#include <stdio.h>
#include <stdlib.h> //malloc, free
#include <unistd.h>
#include "milibx-linux/mlx.h"

#define ERROR_MESSAGE "Please enter valid prompt:\n ./fractol mandelbrot\n or\n ./fractol julia val_1 val_2\n"
//window size + iteration limitations
#define W_WIDTH 800
#define W_HEIGHT 600
#define MAX_ITERATIONS 100

//struture for complex numbers
typedef struct s_complex
{
    double real;
    double imaginary;
}   t_complex;
//structure for fractal data
//MiniLibX pointers, fractal type, zoom level, movements offset

typedef struct s_fractal
{
    //window and image management
    void    *mlx;
    void    *window;
    void    *image;
    //image data information: pixel manipulation
    char    *addr;
    int     bits_pixel;
    int     line-length
    int     endian;
    //fractal to render
    int     fractal_type;
    //functionality of infinite (zoom level)
    double  zoom;
    //tracking the vision position
    double  move_x;
    double  move_y;
    //complex constant for julia set
    t_complex   julia_c;
} t_fractal;
//functions prototypes

//str_utils:
void    ft_putstr_fd(char *str, int fd);
int     ft_strncmp(char *s1, char *s2, int len);
//initializing

//redering

//interacting

//event handling (keyboard and mouse)

//utils functions (zoominh, pixel, color)
