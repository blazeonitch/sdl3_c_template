#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char *argv[])
{

    SDL_Window *window;
    bool done = false;

    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("An SDL3 window", 640, 480, SDL_WINDOW_OPENGL);

    if (window == NULL)
    {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
        return 1;
    }

    while (!done)
    {
        SDL_Event event;

        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                done = true;
            }
        }

        // Do game logic, present a frame, etc.
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
