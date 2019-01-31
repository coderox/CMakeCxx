#include "pch.h"
#include "Component.h"

namespace winrt::CmakeCxx::implementation
{
	hstring Component::Echo(hstring const& message)
	{
		return L"Hello" + message;
	}
}
