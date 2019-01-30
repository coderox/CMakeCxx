#pragma once

namespace CMakeCxx
{
    public ref class Component sealed
    {
    public:
        Component();
        Platform::String^ Echo(Platform::String^ message);
    };
}
