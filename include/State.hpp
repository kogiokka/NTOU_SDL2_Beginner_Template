#pragma once

#include "World.hpp"
#include "sdl/OpenGLWindow.hpp"

struct State {
    sdl::Window::OpenGLWindow* window;
    World::Scene* scene;
};

extern State state;
