#pragma once 
#include "GLOBAL.h" 
#include "Entities.h" 

#define GAME_MAX_FPS        12  /* giới hạn tốc độ khung đến 12fps */
#define GAME_FRAME_TIME     (1000 / GAME_MAX_FPS) 

typedef struct game         /* cấu trúc trò chơi bao gồm */
{
	int score;	//Điểm số
	int speed;
	bool stop;
	FRUIT f;                /* mồi */
	NOTFRUIT nf;
	SNAKE s;               /* rắn */
	DIRECTION dir;          /* hướng di chuyển của rắ n*/
	SDL_bool running;       /* cờ trạng thái hoạt động */
} GAME;

/* khởi tạo trò chơi */
void gameInit(GAME * g, SDL_bool fullscreen);

/* kết thúc trò chơi */
void gameShutdown(GAME * g);

/* vòng lặp trò chơi */
void gameLoop(GAME * g);

/* cập nhật trạng thái trò chơi */
void gameUpdate(GAME * g);

/* dựng hình cho 1 frame */
void gameDraw(GAME * g);

/* xử lý input */
void gameInput(GAME * g);
