#pragma once

#include "App.xaml.g.h"



namespace winrt::myApp::implementation
{
    struct App : AppT<App>
    {
        App() noexcept;
    };
} // namespace winrt::myApp::implementation


