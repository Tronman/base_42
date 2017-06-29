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
    x = 50;
    while (x <= 420)
    {
        y = 50;
        while (y <= 250)
        {
            while (z <= 250)
            {
                mlx_pixel_put(mlx, win, x, y, z, 0x00FFFFFF);
                z++;
            }
            y++;
        }
        x++;
    }

    mlx_key_hook(win, key_funct, 0);
    mlx_loop(mlx);
}