//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#pragma once

#include "Scenario05_PostStream.g.h"
#include "MainPage.h"

namespace winrt::SDKTemplate::implementation
{
    struct Scenario05_PostStream : Scenario05_PostStreamT<Scenario05_PostStream>
    {
        Scenario05_PostStream();

        void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs const& e);
        void OnNavigatedFrom(Windows::UI::Xaml::Navigation::NavigationEventArgs const& e);

        fire_and_forget Start_Click(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e);
        void Cancel_Click(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e);

    private:
        SDKTemplate::MainPage rootPage{ MainPage::Current() };
        Windows::Web::Http::HttpClient httpClient{ nullptr };
        Windows::Foundation::IAsyncAction pendingAction{ nullptr };

        Windows::Foundation::IAsyncAction CancelableRequestAsync(Windows::Web::Http::HttpRequestMessage request);
    };
}

namespace winrt::SDKTemplate::factory_implementation
{
    struct Scenario05_PostStream : Scenario05_PostStreamT<Scenario05_PostStream, implementation::Scenario05_PostStream>
    {
    };
}
