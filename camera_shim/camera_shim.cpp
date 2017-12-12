/*
 * Copyright (C) 2015 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdlib.h>
#include <string>

using namespace std;

extern "C" void _ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void* thiz, uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage, std::string requestorName);
extern "C" void _ZN7android13GraphicBufferC1Ejjij(void* thiz, uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage) {
    _ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(thiz, inWidth, inHeight, inFormat, inUsage, "Camera_SHIM");
}

extern "C" const char* _ZN7android16CameraParameters24WHITE_BALANCE_MANUAL_CCTE = "manual-cct";
extern "C" const char* _ZN7android16CameraParameters26FOCUS_MODE_MANUAL_POSITIONE = "manual-position";