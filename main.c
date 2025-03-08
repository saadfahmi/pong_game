#include <SDL2/SDL.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    SDL_InitSubSystem(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("Pong Game 1972", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    SDL_Surface *surface = SDL_GetWindowSurface(window);
    SDL_Rect pl1 = (SDL_Rect){40, 40, 40, 200};
    Uint32 color = 0xffffffff;
    SDL_FillRect(surface, &pl1, color);

    SDL_UpdateWindowSurface(window);
    SDL_Delay(5000);

    SDL_Rect pl2 = (SDL_Rect){560, 300, 40, 200};
    
    SDL_FillRect(surface, &pl2, color);

    int running = 1;
    SDL_Event event;
    while (running)
    {
        SDL_PollEvent(&event);
        if (event.type == SDL_QUIT)
        {
            running = 0;
        }
        if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_DOWN)
        {
            printf("keydown\n");
            SDL_FillRect(surface, &pl1, 0x00000000);
            pl1.y += 10;
            SDL_FillRect(surface, &pl1, color);
        }
        if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_UP)
        {
            printf("keydown\n");
            SDL_FillRect(surface, &pl1, 0x00000000);
            pl1.y -= 10;
            SDL_FillRect(surface, &pl1, color);
            printf("keyup\n");
        }

        SDL_UpdateWindowSurface(window);
        SDL_Delay(70);
    }
}