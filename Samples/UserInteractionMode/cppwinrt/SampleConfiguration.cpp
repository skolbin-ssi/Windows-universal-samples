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

#include "pch.h"
#include <winrt/SDKTemplate.h>
#include "MainPage.h"
#include "SampleConfiguration.h"

using namespace winrt;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::ViewManagement;
using namespace SDKTemplate;

hstring implementation::MainPage::FEATURE_NAME()
{
    return L"User interaction mode";
}

IVector<Scenario> implementation::MainPage::scenariosInner = winrt::single_threaded_observable_vector<Scenario>(
{
    Scenario{ L"Responding to mode", xaml_typename<SDKTemplate::Scenario1_Basic>() },
});

hstring winrt::to_hstring(UserInteractionMode value)
{
    switch (value)
    {
    case UserInteractionMode::Mouse:
        return L"Mouse";
        break;

    case UserInteractionMode::Touch:
        return L"Touch";

    default:
        return to_hstring(get_abi(value));
    }
}
