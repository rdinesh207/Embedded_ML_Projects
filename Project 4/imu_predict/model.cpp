/* Copyright 2023 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// Automatically created from a TensorFlow Lite flatbuffer using the command:
// xxd -i model.tflite > model.cc

// This is a standard TensorFlow Lite model file that has been converted into a
// C data array, so it can be easily compiled into a binary for devices that
// don't have a file system.

// See train/README.md for a full description of the creation process.

#include "model.h"

// Keep aligned to 16 bytes for CMSIS
alignas(16) const unsigned char g_model[] = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00,
  0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x90, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0xe8, 0x06, 0x00, 0x00,
  0xf8, 0x06, 0x00, 0x00, 0x20, 0x0e, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f,
  0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x98, 0xff, 0xff, 0xff, 0x0d, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73,
  0x65, 0x5f, 0x33, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xf6, 0xf8, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xdc, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49,
  0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f,
  0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x11, 0x00, 0x00, 0x00,
  0xfc, 0x05, 0x00, 0x00, 0xf4, 0x05, 0x00, 0x00, 0xc0, 0x05, 0x00, 0x00,
  0x8c, 0x05, 0x00, 0x00, 0x68, 0x05, 0x00, 0x00, 0x28, 0x05, 0x00, 0x00,
  0x88, 0x04, 0x00, 0x00, 0xc8, 0x02, 0x00, 0x00, 0x74, 0x01, 0x00, 0x00,
  0xb0, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
  0x98, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
  0x68, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xb2, 0xf9, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x32, 0x2e, 0x31, 0x33, 0x2e, 0x30, 0x00, 0x00, 0x12, 0xfa, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb8, 0xf3, 0xff, 0xff, 0xbc, 0xf3, 0xff, 0xff, 0xc0, 0xf3, 0xff, 0xff,
  0xc4, 0xf3, 0xff, 0xff, 0xc8, 0xf3, 0xff, 0xff, 0x42, 0xfa, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x00, 0x7b, 0xbb, 0xbc,
  0xc2, 0xfb, 0xe3, 0xbe, 0x20, 0x07, 0x9d, 0xbe, 0x60, 0x97, 0xec, 0xbf,
  0x49, 0xc0, 0x9d, 0xbf, 0x03, 0x8f, 0x81, 0xbd, 0xcf, 0x21, 0x8b, 0x3e,
  0x33, 0x23, 0x93, 0x3f, 0x55, 0xa2, 0x41, 0x3d, 0xea, 0xcd, 0x13, 0xbf,
  0x0f, 0x8b, 0xa3, 0x3e, 0x0b, 0x28, 0x16, 0x3f, 0x40, 0xfe, 0x97, 0xbf,
  0xec, 0xdb, 0xa5, 0xbd, 0xdc, 0x03, 0x86, 0xbf, 0x1d, 0x03, 0x9b, 0xbe,
  0x0b, 0xc3, 0x34, 0x3f, 0x87, 0xf0, 0x1d, 0x3d, 0x76, 0xe8, 0x36, 0xbe,
  0x65, 0x7b, 0x32, 0x3c, 0x4b, 0xc5, 0x4b, 0x3e, 0x78, 0xfc, 0xd0, 0x3f,
  0x6c, 0x41, 0x9e, 0x3f, 0x51, 0x09, 0x52, 0xbd, 0xa0, 0x15, 0x48, 0x3e,
  0x4a, 0xdb, 0xa9, 0x3d, 0x8f, 0x86, 0x1f, 0xbe, 0xc5, 0x87, 0x8b, 0x3e,
  0xd0, 0x99, 0xc7, 0x3e, 0x38, 0xef, 0x7a, 0x3e, 0x01, 0x66, 0x90, 0x3e,
  0xfc, 0x8a, 0x11, 0xbe, 0xe3, 0xc8, 0xd6, 0x3e, 0x0b, 0xe8, 0x13, 0x3f,
  0x3d, 0x4f, 0x90, 0xbf, 0xb0, 0xa7, 0x2e, 0xbf, 0xd0, 0x13, 0x8c, 0xbe,
  0x4b, 0x8b, 0xc8, 0x3e, 0x09, 0xf4, 0x5e, 0xbf, 0xcc, 0x77, 0xf0, 0xbd,
  0x46, 0x5f, 0x7d, 0xbe, 0x14, 0x0e, 0x15, 0x3f, 0x56, 0x4e, 0x05, 0x3d,
  0x84, 0x8b, 0xa1, 0xbd, 0x43, 0x84, 0x63, 0x3e, 0x02, 0xfb, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x44, 0x01, 0x00, 0x00, 0xc8, 0xb1, 0x87, 0x3e,
  0x4d, 0x80, 0x11, 0xbf, 0x99, 0xc8, 0x5f, 0x3c, 0x22, 0xb4, 0xb8, 0x3d,
  0x92, 0x14, 0x0a, 0x3e, 0xbf, 0x36, 0x87, 0xbf, 0x3b, 0xe8, 0x63, 0xc0,
  0xa3, 0xa9, 0xba, 0x3c, 0xbb, 0x0c, 0xd1, 0x3e, 0x32, 0x37, 0xc7, 0x3d,
  0x58, 0x01, 0xab, 0xbe, 0xaf, 0xcd, 0xd8, 0xbd, 0x22, 0x86, 0x9d, 0x3e,
  0xb5, 0xbb, 0xb2, 0xbe, 0x41, 0x5c, 0x49, 0x40, 0xdd, 0xe8, 0xd5, 0x3e,
  0xfd, 0x9b, 0x90, 0x3f, 0x82, 0x8a, 0x05, 0x3e, 0x44, 0x88, 0x7f, 0x3e,
  0x0d, 0x36, 0xb0, 0xbf, 0x21, 0xe9, 0x9c, 0x3e, 0x5d, 0x60, 0xa4, 0xbd,
  0x5c, 0x40, 0x39, 0xbe, 0x33, 0x6a, 0x81, 0x3f, 0x88, 0xd1, 0x33, 0x3e,
  0x41, 0x4c, 0x37, 0x3f, 0x2c, 0x4f, 0x28, 0x3f, 0xb9, 0x4e, 0xe1, 0xbf,
  0x4a, 0x37, 0x36, 0x40, 0x42, 0xc6, 0xa0, 0xc0, 0xc5, 0x55, 0x04, 0xbe,
  0x76, 0xf7, 0x54, 0xbf, 0x39, 0x71, 0x7f, 0xbf, 0xa5, 0x9a, 0x5e, 0xbe,
  0x50, 0x75, 0x07, 0x3e, 0xee, 0x53, 0x1d, 0xbf, 0x2d, 0x05, 0xba, 0xbd,
  0x61, 0xca, 0x74, 0xbf, 0xc5, 0xb3, 0x59, 0xbd, 0x4a, 0x4e, 0x58, 0xbe,
  0xf9, 0x30, 0x00, 0x3f, 0x80, 0x69, 0x7c, 0x40, 0x09, 0x05, 0xdd, 0xbd,
  0x72, 0x93, 0x0b, 0xc0, 0xcd, 0x73, 0x43, 0x3e, 0x33, 0x39, 0x1b, 0x3e,
  0xa9, 0xbb, 0x8c, 0xc0, 0x97, 0x27, 0xaa, 0x3e, 0x21, 0x96, 0x30, 0xbd,
  0xd5, 0xad, 0xf7, 0x3e, 0xc4, 0xeb, 0xd9, 0x3f, 0xf7, 0x23, 0x01, 0x3d,
  0x3f, 0xee, 0x82, 0x3f, 0xfd, 0x28, 0xad, 0xbe, 0x78, 0xf8, 0x97, 0xbe,
  0xb5, 0xc1, 0xe9, 0x3f, 0x1e, 0xf0, 0x89, 0x3c, 0x0c, 0xb0, 0x4d, 0x3e,
  0x39, 0xef, 0xcc, 0x3e, 0x86, 0x7f, 0xa4, 0xbf, 0x11, 0x14, 0x3b, 0x3f,
  0x41, 0xe3, 0x9b, 0x3d, 0x88, 0x9c, 0x0b, 0x3f, 0xe9, 0x97, 0x28, 0xbe,
  0x5b, 0xf0, 0xfc, 0x3f, 0xe1, 0xc8, 0x21, 0xc0, 0xac, 0xbc, 0x02, 0x3e,
  0x83, 0xc0, 0x78, 0xbe, 0x7e, 0xc0, 0x8d, 0x3f, 0x79, 0x24, 0x5b, 0xbe,
  0xed, 0xf1, 0x36, 0x3f, 0x60, 0xa3, 0x0e, 0x3e, 0xb3, 0x30, 0xf6, 0x3e,
  0x56, 0xaa, 0xeb, 0x3f, 0xc0, 0xf2, 0xac, 0x3e, 0x76, 0xb6, 0xca, 0x3c,
  0x6a, 0x4e, 0x11, 0x3f, 0x03, 0x01, 0x45, 0x40, 0x24, 0x7b, 0x1d, 0x3f,
  0x68, 0xb7, 0xbf, 0xbe, 0x61, 0xa4, 0x40, 0xbe, 0x52, 0xfc, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x7a, 0xc2, 0xfa, 0x3c,
  0xdc, 0x68, 0xfe, 0xbf, 0xa8, 0xe3, 0x00, 0x3f, 0x9f, 0xd0, 0x79, 0x3e,
  0x4e, 0x1f, 0x93, 0xbe, 0x3b, 0x46, 0x4e, 0xbe, 0x84, 0x8e, 0xa5, 0xbe,
  0x1a, 0x7f, 0x12, 0xc0, 0x3c, 0x40, 0x87, 0x3d, 0x26, 0xcf, 0xd8, 0xbe,
  0x7a, 0x4d, 0x0f, 0xbe, 0x4a, 0xe7, 0x33, 0x3d, 0x85, 0x32, 0xd5, 0xbf,
  0x04, 0xc4, 0x8b, 0xbf, 0xe1, 0x93, 0x1e, 0x40, 0x4d, 0x14, 0x91, 0xbd,
  0x25, 0x20, 0xdc, 0x3f, 0xa8, 0x56, 0x80, 0xc0, 0x3f, 0x2d, 0x2e, 0x3f,
  0x0f, 0xcc, 0x5e, 0xbf, 0x0a, 0xf6, 0x66, 0xc0, 0x20, 0xb6, 0x8a, 0xbe,
  0x8b, 0xe5, 0x94, 0xbf, 0xf1, 0xfc, 0xc5, 0xbe, 0x86, 0xb1, 0xd4, 0xbc,
  0xee, 0x07, 0x09, 0xbc, 0x79, 0xa2, 0xeb, 0x3e, 0xca, 0xff, 0x1d, 0xbe,
  0xd4, 0xca, 0x0e, 0xbf, 0x6c, 0xcd, 0x01, 0xbf, 0x65, 0x07, 0x9c, 0x3c,
  0xd5, 0x39, 0xce, 0xbd, 0x43, 0x56, 0xba, 0x3e, 0xad, 0x23, 0xba, 0xbf,
  0x1c, 0x92, 0xbc, 0x3e, 0xbd, 0x89, 0x86, 0xbf, 0xe4, 0x56, 0x31, 0xbd,
  0xaf, 0xff, 0x9e, 0xba, 0x09, 0x41, 0xcc, 0xbd, 0x19, 0x78, 0xb3, 0xbe,
  0x51, 0x4c, 0x54, 0xbe, 0xdb, 0xb6, 0x8a, 0xbe, 0xff, 0xe5, 0xfa, 0xbd,
  0x52, 0x15, 0x10, 0x3f, 0x51, 0xfe, 0x69, 0xbd, 0x1e, 0x4d, 0x53, 0x3b,
  0xbd, 0x51, 0xbe, 0x3e, 0xcd, 0xa4, 0x1c, 0x3e, 0x06, 0x48, 0x73, 0x3e,
  0xaa, 0x21, 0x56, 0xbd, 0xd5, 0xd5, 0xaa, 0xbe, 0xd0, 0x9d, 0x0e, 0xbe,
  0x91, 0xa4, 0x17, 0xbd, 0x62, 0x0f, 0x22, 0xbf, 0x77, 0xca, 0xc4, 0x3e,
  0x50, 0xa0, 0xe8, 0xbe, 0x94, 0x12, 0xaa, 0xbe, 0xd7, 0x24, 0xd6, 0xbe,
  0xa1, 0x51, 0xb6, 0xbe, 0x17, 0x31, 0xbb, 0x3d, 0x06, 0x53, 0x02, 0xc0,
  0xde, 0xcb, 0xa2, 0xbe, 0xe0, 0x31, 0x3d, 0x3f, 0x87, 0x62, 0x03, 0xc0,
  0x82, 0xcf, 0x37, 0xbf, 0x72, 0x40, 0x36, 0xbe, 0x32, 0xb5, 0x17, 0xc0,
  0xf5, 0xaf, 0xd8, 0x3e, 0xe6, 0x20, 0xdd, 0x3e, 0xf9, 0xfb, 0x0c, 0x3e,
  0x01, 0x7b, 0x59, 0x3f, 0xc1, 0xef, 0x49, 0xc0, 0x19, 0x82, 0x15, 0xbe,
  0xf1, 0x1b, 0xd3, 0x3c, 0xe4, 0x23, 0x9a, 0x3f, 0x4b, 0x1f, 0xca, 0x3d,
  0x1a, 0x74, 0x45, 0x3d, 0x08, 0x4c, 0x64, 0xbf, 0xaf, 0x87, 0x1f, 0xbf,
  0x6f, 0xcd, 0x8c, 0xbe, 0xb3, 0x4d, 0xac, 0x3e, 0x0b, 0xc6, 0x56, 0xbe,
  0xaa, 0xb0, 0x5d, 0xbe, 0x62, 0xcd, 0x16, 0xbe, 0xc4, 0x03, 0xd2, 0xbe,
  0xb6, 0x29, 0x90, 0x3d, 0xbf, 0xfe, 0xc7, 0x3e, 0x6c, 0x62, 0x7b, 0xbf,
  0x94, 0x33, 0xce, 0xbe, 0xbb, 0xe0, 0x1d, 0xbf, 0xfe, 0x00, 0xac, 0xbb,
  0x9f, 0xf6, 0xa5, 0x3e, 0x84, 0x46, 0x0b, 0xbd, 0x00, 0x74, 0xd6, 0xbc,
  0x72, 0xff, 0x7c, 0xc0, 0x06, 0xe7, 0x0d, 0x3f, 0xcb, 0x08, 0x2b, 0xbe,
  0xc4, 0xd2, 0x54, 0xbe, 0xa7, 0xc8, 0xb1, 0xbe, 0x6b, 0xf8, 0x3b, 0xbf,
  0x69, 0xa7, 0x92, 0xbe, 0x82, 0x86, 0x6d, 0xbe, 0x50, 0xf9, 0x00, 0xbf,
  0x71, 0x79, 0x9f, 0xbe, 0x2d, 0x1f, 0xba, 0x3c, 0xda, 0x80, 0xc2, 0xbe,
  0x00, 0x4a, 0x9f, 0xbe, 0x94, 0xaf, 0xc6, 0x3e, 0x0e, 0xfe, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0xda, 0xd8, 0x41, 0x3f,
  0x3b, 0xa0, 0x41, 0x3f, 0x65, 0x2f, 0xfd, 0x3e, 0xc7, 0x89, 0xbf, 0xbe,
  0x52, 0x49, 0xe1, 0xbe, 0x1f, 0x79, 0x57, 0xbf, 0x97, 0x5e, 0x6c, 0x3b,
  0x45, 0xf4, 0x7d, 0x3f, 0xee, 0xc7, 0xc2, 0x3c, 0x68, 0xce, 0xa0, 0xbe,
  0x85, 0x85, 0xd0, 0xbe, 0x26, 0x21, 0x8a, 0x3f, 0x39, 0x3e, 0x09, 0x3f,
  0xad, 0x71, 0xc5, 0xbd, 0x2e, 0xf4, 0x34, 0xbf, 0xc9, 0xc6, 0xdd, 0x3d,
  0x33, 0x5e, 0xfe, 0x3f, 0xec, 0x23, 0xbf, 0x3d, 0x59, 0xaf, 0x56, 0xbe,
  0x88, 0xe5, 0x02, 0x3f, 0x85, 0xb5, 0x0a, 0xbf, 0x4e, 0x48, 0xeb, 0x3d,
  0x21, 0x5a, 0x97, 0x3e, 0xb6, 0x2e, 0x39, 0xbf, 0xdb, 0xad, 0xa0, 0x3f,
  0xc7, 0xcc, 0xba, 0x3e, 0x30, 0x0b, 0xba, 0xbe, 0x1b, 0x13, 0x89, 0x3e,
  0x57, 0xe0, 0xd3, 0xbe, 0xc4, 0x8d, 0x2a, 0xbf, 0x6d, 0xf2, 0x27, 0xbf,
  0xea, 0x34, 0xa1, 0x3e, 0xe4, 0x3d, 0x66, 0x3f, 0xb4, 0xa1, 0x02, 0x3f,
  0xe3, 0x9f, 0xcc, 0xbe, 0xa9, 0x35, 0xa8, 0x3e, 0xaa, 0xfe, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x8d, 0x32, 0x8b, 0x3e,
  0x45, 0x4a, 0x9c, 0x3f, 0x52, 0x66, 0x51, 0x40, 0x95, 0x43, 0x5d, 0x3f,
  0x77, 0xc7, 0x24, 0xbf, 0x69, 0x19, 0x2c, 0xbf, 0x8a, 0xde, 0x43, 0xbe,
  0xf0, 0x96, 0x01, 0x3f, 0x96, 0x4a, 0x02, 0x3f, 0x8c, 0xf6, 0xa2, 0x3e,
  0xb4, 0x23, 0x0a, 0x3f, 0xbd, 0xd1, 0x7a, 0x3e, 0xe6, 0xfe, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xb1, 0x1e, 0x11, 0x3f,
  0xdd, 0xd5, 0xab, 0xbe, 0xda, 0x92, 0xd2, 0xbe, 0x6d, 0xbe, 0x3a, 0xbd,
  0xd6, 0x95, 0x0b, 0x3e, 0x06, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0xe2, 0x00, 0x78, 0x3e, 0xe0, 0xad, 0x2c, 0x3f,
  0xd3, 0xc0, 0x23, 0x3f, 0x77, 0x38, 0x4a, 0x3f, 0x50, 0x0d, 0x92, 0x3f,
  0x15, 0x78, 0x90, 0xbf, 0x5c, 0xc1, 0xda, 0x3f, 0xa8, 0xf3, 0xe0, 0x3f,
  0xad, 0xf5, 0x09, 0x3f, 0x36, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x43, 0x12, 0x85, 0x3f, 0x6b, 0x7b, 0x19, 0x3f,
  0x9d, 0x44, 0x70, 0x3f, 0xf2, 0x96, 0x1b, 0x40, 0x84, 0xba, 0x1c, 0xbe,
  0x98, 0x28, 0x05, 0x40, 0xfe, 0x0e, 0x58, 0x40, 0x6b, 0x08, 0x23, 0x40,
  0x4e, 0x1c, 0x88, 0x3c, 0xf0, 0xf8, 0xff, 0xff, 0xf4, 0xf8, 0xff, 0xff,
  0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e,
  0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x5c, 0x01, 0x00, 0x00,
  0x60, 0x01, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x04, 0x01, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x1a, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x80, 0x3f, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x66, 0xff, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0xbc, 0xf9, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x96, 0xff, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x86, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x38, 0x05, 0x00, 0x00, 0xc8, 0x04, 0x00, 0x00,
  0x58, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0xac, 0x03, 0x00, 0x00,
  0x64, 0x03, 0x00, 0x00, 0x18, 0x03, 0x00, 0x00, 0xcc, 0x02, 0x00, 0x00,
  0x80, 0x02, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00,
  0xd8, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x16, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x05, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00,
  0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74,
  0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a,
  0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x6e, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x05, 0x00, 0x00, 0x00, 0x58, 0xfb, 0xff, 0xff,
  0x34, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d,
  0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
  0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33,
  0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0xe2, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x68, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x09, 0x00, 0x00, 0x00, 0xcc, 0xfb, 0xff, 0xff, 0x4c, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75,
  0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x52, 0x65, 0x6c,
  0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61,
  0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x6e, 0xfc, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00,
  0x58, 0xfc, 0xff, 0xff, 0x4c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65,
  0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x31, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65,
  0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0xfa, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0xe4, 0xfc, 0xff, 0xff,
  0x46, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74,
  0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x52, 0x65, 0x6c,
  0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41,
  0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0xea, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0x58, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75,
  0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x32, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0xa0, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75,
  0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x7a, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0xe8, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75,
  0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0xc2, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x30, 0xfe, 0xff, 0xff, 0x17, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x06, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0x74, 0xfe, 0xff, 0xff, 0x27, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61,
  0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x56, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xc4, 0xfe, 0xff, 0xff,
  0x29, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x42,
  0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56,
  0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xaa, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff,
  0x29, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x42,
  0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56,
  0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00,
  0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff,
  0x29, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42,
  0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56,
  0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00,
  0x1c, 0x00, 0x18, 0x00, 0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61,
  0x75, 0x6c, 0x74, 0x5f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e,
  0x70, 0x75, 0x74, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff,
  0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x0c, 0x00, 0x0c, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09
};

const int g_model_len = sizeof(g_model);
