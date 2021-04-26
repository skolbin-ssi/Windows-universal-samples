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

#include "Scenario1_Enable.g.h"

namespace winrt::SDKTemplate::implementation
{
    struct Scenario1_Enable : Scenario1_EnableT<Scenario1_Enable>
    {
        Scenario1_Enable();
    };
}

namespace winrt::SDKTemplate::factory_implementation
{
    struct Scenario1_Enable : Scenario1_EnableT<Scenario1_Enable, implementation::Scenario1_Enable>
    {
    };
}
