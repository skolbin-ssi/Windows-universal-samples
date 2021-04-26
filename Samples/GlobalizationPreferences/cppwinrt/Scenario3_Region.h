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

#include "Scenario3_Region.g.h"

namespace winrt::SDKTemplate::implementation
{
    struct Scenario3_Region : Scenario3_RegionT<Scenario3_Region>
    {
        Scenario3_Region();

        void ShowResults_Click(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::SDKTemplate::factory_implementation
{
    struct Scenario3_Region : Scenario3_RegionT<Scenario3_Region, implementation::Scenario3_Region>
    {
    };
}
