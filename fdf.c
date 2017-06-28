#include <stdlib.h>
#include <stdio.h>
#include "minilibx/mlx.h"
#include "../get_next_line/get_next_line.h"

/*int        read_line(char *str, char *line)
{
    int        fd;

    if (fd > 1)
        fd = get_next_line(*str);
    return (fd);
}*/

int        key_funct(int keycode, void *param)
{
    printf("key event %d\n", keycode);
    if (keycode == 53)
        exit(1);
    return (0);
}

int        main()
{
    void    *mlx;
    void    *win;
    int        x;
    int        y;
    int        x1;
    int        y1;

    mlx = mlx_init();
    win = mlx_new_window(mlx, 700, 500, "mlx 42");
    y = 50;
    while (y <= 420)
    {
        x = 50;
        while (x <= 250)
        {
            mlx_pixel_put(mlx, win, y, x, 0x00FFFFFF);
            x++;
        }
        y += 20;
    }
    y1 = 50;
    while (y1 <= 250)
    {
        x1 = 50;
        while (x1 <= 410)
        {
            mlx_pixel_put(mlx, win, x1, y1, 0xff0000);
            x1++;
        }
        y1 += 20;
    }
    mlx_key_hook(win, key_funct, 0);
    mlx_loop(mlx);
}