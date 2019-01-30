#include "pch.h"
#include "Component.h"

using namespace CMakeCxx;
using namespace Platform;

Component::Component() 
{
}

String^ Component::Echo(String^ message){
    return L"Hello" + message;
}
