#include <iostream>
#include <cassert>
#include "World/World.h"

int main() {
    World w;
    w.build();
    assert(w.tracer_ptr != nullptr);
    w.render_scene();
    return 0;
}