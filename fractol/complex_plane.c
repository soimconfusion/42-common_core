#include <stdio.h>

typedef struct s_complex
{
    double  real; //x
    double  i; //y
}   t_complex;

//just to test:
int main(void)
{
    t_complex   z; //1st (0, 0)
    t_complex   c;
    double  tmp_real;
    //1st iteration:
    z.real = 0;
    z.i = 0;
    c.real = 0.25; // example video (1º)
    c.i = 0.4;
    for (int i = 0; i< 42; ++i)
    {
        //z^2 + c aka x^2+2xyi - y^2
        tmp_real = (z.real * z.real) - (z.i * z. i);
        z.i = 2 * z.real * z.i;
        z.real = tmp_real;
        //+c
        z.real +=c.real;
        z.i += c.i;
        printf("iteration n -> %d real %f imaginary %f\n", i, z.real, z.i);
    }
    return (0);
}
