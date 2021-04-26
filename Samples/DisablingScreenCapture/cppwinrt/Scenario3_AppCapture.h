﻿//*********************************************************
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

#include "Scenario3_AppCapture.g.h"

namespace winrt::SDKTemplate::implementation
{
    struct Scenario3_AppCapture : Scenario3_AppCaptureT<Scenario3_AppCapture>
    {
        Scenario3_AppCapture();

        void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs const& e);
        void OnNavigatedFrom(Windows::UI::Xaml::Navigation::NavigationEventArgs const& e);

        fire_and_forget AllowAppCaptureCheckBox_Toggled(Windows::Foundation::IInspectable const&, Windows::UI::Xaml::RoutedEventArgs const&);
        void AppCapture_CapturingChanged(Windows::Media::Capture::AppCapture const&, Windows::Foundation::IInspectable const&);
    private:
        SDKTemplate::MainPage rootPage{ MainPage::Current() };
        Windows::Media::Capture::AppCapture appCapture{ nullptr };
        event_token capturingChangedToken{};

        void UpdateCaptureStatus();
    };
}

namespace winrt::SDKTemplate::factory_implementation
{
    struct Scenario3_AppCapture : Scenario3_AppCaptureT<Scenario3_AppCapture, implementation::Scenario3_AppCapture>
    {
    };
}
