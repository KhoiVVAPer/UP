#pragma once 
#include "GLOBAL.h" 

#define SNAKE_MAXLEN    100 /* chiều dài tối đa của rắn */ 
#define SNAKE_INITLEN   2   /* chiều dài ban đầu của rắn */ 

typedef struct snake {
	COORD   coords[SNAKE_MAXLEN];   /* rắn là một danh sách các tọa độ 2D */
	int     len;                    /* độ dài hiện thời của rắn */
	Uint32		bodyColor;				/* màu của thân*/
} SNAKE;

typedef struct fruit {
	COORD   loc;                    /* vị trí của mồi */
	Uint32  color;                  /* màu sắc */
} FRUIT;


typedef struct notFruit {
	COORD   loc;                    /* vị trí của mồi */
	Uint32  color;                  /* màu sắc */
} NOTFRUIT;


/* vẽ một ô của thân rắn hoặc đầu rắn */
void snakeCell(COORD c, SDL_bool head, int body);

/* khởi tạo rắn */
void snakeInit(SNAKE * s);

/* vẽ rắn */
void snakeDraw(const SNAKE * s);


/* cập nhật trạng thái của rắn */
void snakeUpdate(SNAKE * s);

/* phát sinh mồi */
void fruitGen(FRUIT * f, const SNAKE * s);
/* vẽ mồi */
void fruitDraw(const FRUIT * f);

void notFruitGen(NOTFRUIT * nf, const SNAKE * s);
/* vẽ mồi */

void notFruitDraw(const NOTFRUIT * nf);