#pragma once

#include "Component.g.h"

namespace winrt::CmakeCxx::implementation
{
	struct Component : ComponentT<Component>
	{
		Component() = default;

		hstring Echo(hstring const& message);
	};
}

namespace winrt::CmakeCxx::factory_implementation
{
	struct Component : ComponentT<Component, implementation::Component>
	{
	};
}
