// Graphics by Lanea Zimmerman
// https://opengameart.org/content/tiny-16-basic
// Licensed under CC-BY 3.0, https://creativecommons.org/licenses/by/3.0/

#include "Pokitto.h"
#include "Tilemap.hpp"

using PC = Pokitto::Core;
using PD = Pokitto::Display;


namespace Data {
    
    // map, 16x16
    
    const unsigned char mapPixels[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x22, 0x21, 0x11, 0x00, 0x00, 0x11, 0x13, 0x22,
    0x22, 0x31, 0x31, 0x10, 0x00, 0x11, 0x11, 0x32,
    0x23, 0x33, 0x11, 0x11, 0x00, 0x11, 0x13, 0x22,
    0x22, 0x21, 0x11, 0x11, 0x10, 0x01, 0x12, 0x22,
    0x22, 0x31, 0x13, 0x11, 0x11, 0x01, 0x12, 0x22,
    0x22, 0x21, 0x32, 0x31, 0x11, 0x01, 0x13, 0x33,
    0x22, 0x31, 0x13, 0x11, 0x11, 0x01, 0x13, 0x23,
    0x23, 0x31, 0x11, 0x11, 0x10, 0x11, 0x12, 0x22,
    0x32, 0x33, 0x11, 0x11, 0x11, 0x11, 0x13, 0x23,
    0x22, 0x23, 0x11, 0x33, 0x11, 0x11, 0x11, 0x13,
    0x22, 0x23, 0x31, 0x11, 0x11, 0x13, 0x32, 0x23,
    0x32, 0x32, 0x22, 0x33, 0x22, 0x33, 0x22, 0x22,
    0x33, 0x22, 0x22, 0x32, 0x22, 0x23, 0x22, 0x22,
    };
    
    

};