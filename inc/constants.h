#ifndef _GLOBAL_
#define _GLOBAL_

#define FALSE 0
#define TRUE 1

#define PI 3.14159265
#define TWO_PI 6.28318530

#define TILE_SIZE 64
#define MAP_NUM_ROWS 19
#define MAP_NUM_COLS 19
#define NUM_TEXTURES 8

#define MINIMAP_SCALE_FACTOR 0.17

#define WINDOW_WIDTH (MAP_NUM_COLS * TILE_SIZE)
#define WINDOW_HEIGHT (MAP_NUM_ROWS * TILE_SIZE)

#define TEXTURE_WIDTH 64
#define TEXTURE_HEIGHT 64

#define FOV_ANGLE (60 * (PI / 180))

#define NUM_RAYS WINDOW_WIDTH

#define FPS 30
#define FRAME_TIME_LENGTH (1000 / FPS)

#define REDBRICK_TEXTURE_FILEPATH "./img/redbrick.png"
#define PURPLESTONE_TEXTURE_FILEPATH "./img/purplestone.png"
#define MOSSYSTONE_TEXTURE_FILEPATH "./img/mossystone.png"
#define GRAYSTONE_TEXTURE_FILEPATH "./img/graystone.png"
#define COLORSTONE_TEXTURE_FILEPATH "./img/colorstone.png"
#define BLUESTONE_TEXTURE_FILEPATH "./img/bluestone.png"
#define WOOD_TEXTURE_FILEPATH "./img/wood.png"
#define EAGLE_TEXTURE_FILEPATH "./img/eagle.png"
#define PIKUMA_TEXTURE_FILEPATH "./img/pikuma.png"

#endif /* _GLOBAL_ */
