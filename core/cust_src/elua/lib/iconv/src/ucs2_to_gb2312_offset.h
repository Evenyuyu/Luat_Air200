const u16 number_of_ucs2_4E00_9FFF = 0x1a6b;
const u8 ucs2_mirror_4E00_9FFF[ 0xA0 - 0x4E ][256 >> 3] = 
{
    {
        0x8b, 0x7f, 0x7b, 0x7f, 0xb4, 0x3d, 0x55, 0xef, 
        0xa8, 0xfb, 0x5d, 0xf3, 0x43, 0x02, 0x0b, 0x40, 
        0x40, 0xfb, 0x3e, 0x8d, 0xf7, 0x7b, 0x2c, 0x8c, 
        0xff, 0x6e, 0xfa, 0xe3, 0x3a, 0x1d, 0xed, 0xa8, 
    },
    {
        0x02, 0xe6, 0x83, 0xcf, 0xf5, 0x8c, 0x55, 0x35, 
        0x48, 0xe0, 0xab, 0xff, 0xb9, 0x92, 0x59, 0xd8, 
        0x18, 0xab, 0x92, 0x28, 0xe9, 0xd7, 0x20, 0x80, 
        0x38, 0xc4, 0x83, 0xf5, 0x4a, 0xe7, 0x0a, 0x45, 
    },
    {
        0x00, 0xb0, 0x14, 0x97, 0x62, 0x77, 0x00, 0x54, 
        0x88, 0xd1, 0x20, 0x14, 0x20, 0x10, 0xc0, 0xc8, 
        0x21, 0x21, 0x00, 0x00, 0xa8, 0x13, 0x04, 0x0c, 
        0x00, 0x80, 0x40, 0x04, 0xc0, 0x70, 0x28, 0x08, 
    },
    {
        0xc0, 0x08, 0x04, 0x00, 0x02, 0x00, 0x00, 0x80, 
        0x7b, 0x2b, 0x72, 0x14, 0x24, 0x79, 0xfb, 0x3b, 
        0x27, 0x33, 0xe4, 0x1a, 0x35, 0x98, 0xef, 0x38, 
        0xd1, 0x9a, 0x02, 0x28, 0x13, 0xa8, 0x69, 0xbf, 
    },
    {
        0xcf, 0x65, 0xc6, 0x2f, 0x11, 0x6b, 0xc9, 0xaf, 
        0x0f, 0x34, 0x53, 0x50, 0xa2, 0x86, 0x04, 0xa0, 
        0x06, 0x01, 0x09, 0xe8, 0x0f, 0x3f, 0x0e, 0xc0, 
        0x88, 0x0a, 0x45, 0x81, 0x10, 0x00, 0x01, 0xc6, 
    },
    {
        0x61, 0xa1, 0xe1, 0x26, 0x4b, 0x44, 0x00, 0xce, 
        0xaa, 0xc7, 0xee, 0xd4, 0xdf, 0xca, 0xbb, 0x85, 
        0x74, 0x3a, 0x20, 0xa5, 0x6c, 0x43, 0x40, 0x88, 
        0x06, 0x3f, 0xd2, 0x8b, 0x79, 0xff, 0xef, 0x3b, 
    },
    {
        0x5a, 0xf7, 0xef, 0xe8, 0xcb, 0xfb, 0x36, 0x5b, 
        0x49, 0x0d, 0xfd, 0x1b, 0x54, 0x01, 0xee, 0x39, 
        0x55, 0xd8, 0x75, 0x2e, 0xd8, 0xbf, 0x1a, 0xa9, 
        0xd7, 0xf3, 0xbf, 0xf6, 0xe0, 0x67, 0x0c, 0xb4, 
    },
    {
        0xc2, 0x82, 0x13, 0x08, 0x9d, 0xd4, 0x8b, 0xd0, 
        0x5a, 0x06, 0x61, 0x10, 0xf2, 0x74, 0xe0, 0x59, 
        0x9f, 0x8f, 0x12, 0xb3, 0x80, 0x00, 0xaa, 0x6a, 
        0x30, 0x32, 0x5e, 0xb0, 0x7a, 0x9d, 0xac, 0x60, 
    },
    {
        0x03, 0xd3, 0x00, 0xc9, 0x98, 0x30, 0x56, 0x8a, 
        0x00, 0x70, 0x90, 0x13, 0x14, 0x1f, 0x42, 0x18, 
        0x60, 0xc0, 0x08, 0x00, 0x08, 0x80, 0x80, 0x10, 
        0x00, 0x04, 0x90, 0xec, 0x17, 0x28, 0x33, 0xe6, 
    },
    {
        0x58, 0x07, 0x00, 0x90, 0x08, 0xf7, 0x09, 0x4e, 
        0x85, 0xf4, 0x83, 0xfc, 0x53, 0xaf, 0xc8, 0x18, 
        0x7c, 0x18, 0x0c, 0x08, 0xdf, 0x6a, 0x14, 0x01, 
        0x0c, 0xc8, 0x34, 0xa7, 0x11, 0xa0, 0x10, 0x27, 
    },
    {
        0xc5, 0x28, 0x22, 0x42, 0x13, 0x04, 0x21, 0x00, 
        0x10, 0x30, 0x12, 0x41, 0x20, 0x18, 0x00, 0x40, 
        0x2b, 0x02, 0x0c, 0xc6, 0x00, 0x03, 0x00, 0x10, 
        0x22, 0x00, 0x22, 0x00, 0x10, 0x58, 0x49, 0x02, 
    },
    {
        0x94, 0xa0, 0x70, 0x96, 0xb0, 0xee, 0x92, 0x17, 
        0x96, 0xcb, 0xf2, 0x05, 0x25, 0x00, 0x58, 0x23, 
        0xde, 0x25, 0xcc, 0x42, 0x38, 0xcf, 0x04, 0x4a, 
        0x40, 0x0c, 0x9f, 0x35, 0x28, 0x11, 0x00, 0x8a, 
    },
    {
        0xfa, 0x13, 0x0a, 0x91, 0x29, 0x02, 0x56, 0x10, 
        0x41, 0x06, 0x20, 0x04, 0x84, 0x04, 0xf0, 0x84, 
        0x00, 0x00, 0x04, 0x0c, 0x00, 0x04, 0x2c, 0x41, 
        0x06, 0x12, 0x54, 0x11, 0x4b, 0x0a, 0x02, 0x00, 
    },
    {
        0x00, 0x02, 0xc0, 0x00, 0x00, 0x00, 0x94, 0x00, 
        0x01, 0x00, 0xbb, 0xbf, 0x7c, 0x16, 0x2b, 0x24, 
        0xbb, 0x9b, 0xa8, 0x7f, 0x7f, 0x0c, 0x79, 0xe3, 
        0xf4, 0x10, 0x0d, 0xe0, 0x32, 0x41, 0x01, 0x9f, 
    },
    {
        0x52, 0x86, 0x72, 0x35, 0xb4, 0x10, 0x12, 0xff, 
        0x27, 0xcf, 0x23, 0x42, 0x6b, 0xc0, 0x02, 0x86, 
        0x06, 0x31, 0xd3, 0x1f, 0x0c, 0x3a, 0xaa, 0xa1, 
        0x12, 0x08, 0x04, 0x02, 0x72, 0x25, 0x01, 0x08, 
    },
    {
        0xcc, 0x40, 0x50, 0x48, 0xd0, 0x62, 0x10, 0x60, 
        0x80, 0x1c, 0x00, 0x29, 0x00, 0x9a, 0x10, 0x00, 
        0x04, 0x00, 0x00, 0x22, 0x00, 0x00, 0x80, 0x00, 
        0x20, 0x20, 0x00, 0x68, 0xe6, 0xcb, 0x9e, 0x60, 
    },
    {
        0x6e, 0x91, 0x73, 0x3f, 0xc0, 0x60, 0x82, 0x39, 
        0x34, 0x10, 0x30, 0x48, 0x06, 0x00, 0x5c, 0xbd, 
        0xd1, 0x8c, 0xfb, 0xd6, 0xe1, 0x20, 0xe8, 0x43, 
        0x00, 0x06, 0x4e, 0x08, 0x00, 0x05, 0xd0, 0xc4, 
    },
    {
        0x1f, 0x8d, 0xaa, 0x89, 0xe1, 0xa6, 0x02, 0x16, 
        0x01, 0x00, 0xed, 0x21, 0x56, 0x36, 0x8b, 0x1a, 
        0xb7, 0x1f, 0xa5, 0x13, 0x02, 0x65, 0xa0, 0x30, 
        0x78, 0xb2, 0xc7, 0x23, 0x93, 0x6c, 0x22, 0xe9, 
    },
    {
        0x7f, 0xe4, 0x74, 0x3a, 0xe3, 0x8f, 0x20, 0x98, 
        0x0e, 0x28, 0x25, 0x26, 0x9c, 0xbf, 0x49, 0xbf, 
        0x18, 0x32, 0x54, 0xac, 0x49, 0xb9, 0x16, 0x19, 
        0x60, 0x0c, 0x22, 0xb5, 0xc1, 0xfb, 0x59, 0x06, 
    },
    {
        0x43, 0xe3, 0x20, 0x84, 0xd9, 0x08, 0x00, 0x80, 
        0x00, 0x55, 0x22, 0x20, 0x84, 0x01, 0xa1, 0x00, 
        0x00, 0x48, 0x10, 0x20, 0x80, 0x13, 0x80, 0x40, 
        0x04, 0x0d, 0x16, 0x00, 0x40, 0x00, 0x20, 0x80, 
    },
    {
        0x40, 0xfd, 0xe7, 0x8d, 0x36, 0x54, 0x98, 0xe0, 
        0x8b, 0x7b, 0x1e, 0x09, 0xc8, 0xfe, 0x49, 0xd2, 
        0x11, 0x06, 0xee, 0x8d, 0x37, 0x19, 0x22, 0xba, 
        0xf4, 0x77, 0xdd, 0x9f, 0xec, 0xf3, 0xda, 0xf0, 
    },
    {
        0x86, 0x43, 0x42, 0xec, 0x3f, 0x8d, 0x04, 0x26, 
        0x6c, 0xfa, 0x21, 0xc0, 0x8e, 0x62, 0xc2, 0x0c, 
        0x85, 0xd7, 0x45, 0x01, 0xad, 0x77, 0x99, 0x55, 
        0x50, 0xe2, 0x45, 0x40, 0x0b, 0x26, 0x54, 0xa1, 
    },
    {
        0x27, 0x98, 0x19, 0x58, 0x43, 0x34, 0x10, 0xa4, 
        0xf2, 0x05, 0x14, 0x41, 0x80, 0x22, 0x00, 0x07, 
        0xb4, 0x00, 0x66, 0x42, 0x10, 0x72, 0xa1, 0x15, 
        0x25, 0x60, 0x85, 0x41, 0x54, 0x00, 0x00, 0x00, 
    },
    {
        0x01, 0x02, 0x04, 0x01, 0x20, 0xc8, 0x70, 0xcb, 
        0x20, 0x93, 0x62, 0x6a, 0x4c, 0x18, 0x95, 0x00, 
        0x80, 0x18, 0x8b, 0x9a, 0xb2, 0xaa, 0x01, 0x32, 
        0x7a, 0xd8, 0xc4, 0x00, 0xe5, 0xf3, 0xc3, 0x04, 
    },
    {
        0x4d, 0xd4, 0x38, 0xa2, 0xa1, 0xa1, 0x72, 0x50, 
        0x0a, 0x98, 0xfc, 0x84, 0x52, 0xc1, 0xd1, 0x44, 
        0x94, 0x10, 0xc2, 0x20, 0x80, 0x41, 0x10, 0x42, 
        0x00, 0x00, 0x00, 0x3a, 0x40, 0x02, 0x9d, 0xd2, 
    },
    {
        0x01, 0x2f, 0xb1, 0xa8, 0x40, 0xbd, 0x32, 0x24, 
        0x4d, 0xd3, 0x4b, 0xd0, 0x23, 0xa7, 0xad, 0xd0, 
        0x92, 0x0a, 0xa1, 0x75, 0xac, 0xad, 0xe9, 0x01, 
        0x1a, 0x80, 0x1f, 0x77, 0x25, 0x92, 0x1b, 0xa0, 
    },
    {
        0xa1, 0xdf, 0xca, 0x20, 0x02, 0x06, 0x8c, 0x73, 
        0x7f, 0x57, 0x3b, 0x00, 0xff, 0x0b, 0xd0, 0x00, 
        0x6a, 0x80, 0x88, 0x00, 0xc4, 0xa1, 0x29, 0x00, 
        0x05, 0x2a, 0x24, 0x05, 0x09, 0x40, 0x23, 0x16, 
    },
    {
        0x22, 0x68, 0x05, 0x80, 0x11, 0x20, 0x11, 0xa2, 
        0x04, 0x00, 0x90, 0x64, 0x49, 0x48, 0x82, 0x13, 
        0xd5, 0x23, 0x30, 0x19, 0x80, 0x29, 0x92, 0x08, 
        0x02, 0x54, 0x11, 0x88, 0x01, 0x20, 0x04, 0xa0, 
    },
    {
        0x00, 0x04, 0x80, 0x81, 0x02, 0x85, 0x22, 0x60, 
        0x90, 0x00, 0x01, 0x0b, 0x22, 0x00, 0x02, 0x12, 
        0x11, 0x40, 0x83, 0x00, 0x01, 0x1a, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x9f, 0x00, 0x84, 0x46, 
        0xc8, 0x12, 0x00, 0x02, 0xfc, 0x04, 0x00, 0x1a, 
        0xde, 0x2e, 0x4c, 0x0c, 0x02, 0x04, 0xb8, 0x80, 
        0x26, 0xa8, 0xfc, 0x0a, 0x02, 0x8c, 0x28, 0x22, 
    },
    {
        0xe0, 0xa0, 0x7b, 0x8f, 0xd6, 0xc7, 0x35, 0x21, 
        0xc7, 0x06, 0xb1, 0xf8, 0x13, 0x07, 0x55, 0x62, 
        0x6e, 0x93, 0x19, 0x8a, 0xfa, 0x6e, 0x0e, 0xfb, 
        0x30, 0x16, 0xf9, 0x48, 0x2f, 0xcd, 0xeb, 0x7d, 
    },
    {
        0x92, 0x58, 0x84, 0x4e, 0xa0, 0x4c, 0x2e, 0x7a, 
        0xea, 0xed, 0x1e, 0x56, 0x49, 0xc6, 0x90, 0x11, 
        0x24, 0x53, 0x3a, 0xe8, 0xdb, 0xcf, 0x24, 0x81, 
        0xf1, 0x18, 0x42, 0x63, 0x53, 0x58, 0x8a, 0x1a, 
    },
    {
        0x20, 0x74, 0xd3, 0x24, 0x3b, 0xaa, 0x14, 0x05, 
        0x18, 0x60, 0x58, 0x89, 0x00, 0x48, 0x00, 0xc0, 
        0x68, 0x82, 0x01, 0x91, 0xa4, 0x84, 0xd6, 0x2c, 
        0x86, 0x88, 0xba, 0xc4, 0x77, 0x03, 0x10, 0x02, 
    },
    {
        0x44, 0x82, 0x38, 0x00, 0x11, 0xae, 0x4a, 0x40, 
        0xc0, 0x28, 0x00, 0x51, 0x44, 0x60, 0x14, 0x15, 
        0x10, 0x73, 0x00, 0x10, 0x82, 0x00, 0x48, 0x02, 
        0x05, 0x02, 0x06, 0x40, 0x03, 0xc0, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x02, 0x0c, 0x08, 0x00, 0x20, 0x02, 
        0x00, 0x90, 0x00, 0x40, 0x00, 0xb8, 0x61, 0xd1, 
        0x21, 0x46, 0x74, 0x32, 0x00, 0xf8, 0x8a, 0x3b, 
        0x0f, 0x05, 0x00, 0x8b, 0xd0, 0xbb, 0x80, 0x22, 
    },
    {
        0x00, 0x06, 0x69, 0x07, 0x40, 0x80, 0x43, 0x00, 
        0x20, 0x54, 0x00, 0x50, 0xd0, 0x41, 0x0c, 0x25, 
        0x10, 0x84, 0x10, 0x83, 0x01, 0x11, 0x28, 0x02, 
        0x08, 0x40, 0x30, 0x00, 0xa1, 0x40, 0x00, 0x02, 
    },
    {
        0x40, 0x00, 0x00, 0x20, 0x00, 0x15, 0xe3, 0xab, 
        0x80, 0x31, 0x44, 0xaa, 0xc6, 0xc2, 0x24, 0xc6, 
        0x13, 0xac, 0x04, 0x80, 0x00, 0xb0, 0xd1, 0x03, 
        0x1e, 0x61, 0x85, 0x42, 0x03, 0xf3, 0x9f, 0x1d, 
    },
    {
        0x0a, 0x44, 0xe8, 0x78, 0x26, 0x5e, 0x92, 0xc3, 
        0x00, 0x20, 0x85, 0x00, 0x01, 0xb0, 0x00, 0x40, 
        0x90, 0x4a, 0x42, 0x88, 0x04, 0xca, 0x8d, 0x0c, 
        0x05, 0xa7, 0x03, 0x42, 0xa1, 0x22, 0x04, 0x00, 
    },
    {
        0x68, 0x86, 0x01, 0x0c, 0x64, 0x55, 0x79, 0x10, 
        0x02, 0x00, 0xa0, 0xde, 0x00, 0x20, 0xc1, 0x40, 
        0x8b, 0x48, 0x01, 0x50, 0x80, 0x03, 0x00, 0x04, 
        0x00, 0x00, 0x04, 0x50, 0x5d, 0xc0, 0xd0, 0x80, 
    },
    {
        0x10, 0xa0, 0x0a, 0x97, 0x20, 0xbb, 0xaf, 0x4d, 
        0x21, 0xd9, 0x10, 0x1e, 0x60, 0x04, 0x14, 0x83, 
        0x48, 0x88, 0xd6, 0xa6, 0x3b, 0xd8, 0x3f, 0x73, 
        0xbc, 0x27, 0x74, 0x49, 0xdc, 0x0d, 0x13, 0x92, 
    },
    {
        0x2b, 0x14, 0xa1, 0x8b, 0x75, 0x2e, 0x39, 0xd1, 
        0x09, 0x30, 0x50, 0x50, 0x08, 0x88, 0x00, 0x69, 
        0xd4, 0x49, 0x4a, 0x02, 0x10, 0x40, 0x16, 0x80, 
        0x64, 0xe5, 0xd7, 0x89, 0x20, 0xc0, 0x16, 0x53, 
    },
    {
        0x92, 0x2b, 0x00, 0x86, 0x45, 0xa3, 0xe0, 0x15, 
        0x8b, 0x00, 0x03, 0x0c, 0x6e, 0x19, 0x00, 0xe2, 
        0x31, 0x70, 0x06, 0x80, 0xa5, 0x16, 0x29, 0xa8, 
        0x00, 0x20, 0x80, 0x18, 0xac, 0x7a, 0x48, 0xe1, 
    },
    {
        0x07, 0x32, 0xd6, 0xb5, 0xe8, 0x32, 0x91, 0x5f, 
        0xa1, 0x50, 0xe5, 0x20, 0x00, 0x7c, 0x80, 0x10, 
        0x80, 0x72, 0x8a, 0x9d, 0xaa, 0x00, 0x1f, 0x42, 
        0x22, 0x0e, 0x31, 0x02, 0x00, 0x11, 0x94, 0x04, 
    },
    {
        0x22, 0x00, 0x08, 0x40, 0x10, 0x00, 0x10, 0x5c, 
        0x43, 0x03, 0xc8, 0xfc, 0xa5, 0xa1, 0x80, 0x05, 
        0x33, 0x84, 0x00, 0x04, 0x80, 0x00, 0x08, 0x6e, 
        0x4b, 0x2a, 0x26, 0x81, 0xd8, 0xaa, 0x01, 0x29, 
    },
    {
        0x4d, 0x68, 0x90, 0x44, 0x09, 0x00, 0x88, 0xba, 
        0x40, 0x00, 0x82, 0x00, 0x00, 0x00, 0xd1, 0x87, 
        0x5b, 0x21, 0xe6, 0xb1, 0x61, 0x31, 0x08, 0x80, 
        0x00, 0x08, 0x40, 0xc2, 0x69, 0xa0, 0x00, 0xa6, 
    },
    {
        0x58, 0x8d, 0x32, 0x4a, 0x71, 0x5d, 0x0a, 0x55, 
        0xa0, 0x9a, 0x57, 0x2d, 0x05, 0x40, 0xa6, 0x4a, 
        0x21, 0x20, 0xb1, 0x30, 0xc6, 0x3f, 0x12, 0x01, 
        0xc2, 0x10, 0x0a, 0x26, 0x62, 0x44, 0x82, 0x50, 
    },
    {
        0x80, 0x98, 0x40, 0x80, 0xc0, 0x04, 0x00, 0x81, 
        0x03, 0x20, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 
        0x00, 0x02, 0xa6, 0xf1, 0x34, 0x44, 0x0e, 0x72, 
        0xa2, 0x35, 0xe0, 0x92, 0x01, 0x81, 0x00, 0x09, 
    },
    {
        0x00, 0x04, 0x00, 0x00, 0x85, 0x88, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
        0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x04, 0x00, 0x00, 0x88, 0xff, 0xbf, 0xef, 0xe7, 
        0xff, 0xff, 0xbf, 0xff, 0xef, 0xef, 0xff, 0xfd, 
    },
    {
        0xff, 0xfb, 0xfe, 0xbf, 0xff, 0xff, 0x7f, 0x05, 
        0x34, 0x00, 0xb3, 0x85, 0x06, 0x47, 0x16, 0x42, 
        0x02, 0x54, 0x10, 0xe4, 0x92, 0x80, 0x05, 0xb3, 
        0x22, 0x54, 0x30, 0x81, 0x63, 0x42, 0x0b, 0x18, 
    },
    {
        0x7b, 0x38, 0xf5, 0x13, 0xe5, 0x07, 0xea, 0xa9, 
        0x4c, 0x3c, 0x14, 0x05, 0x00, 0x06, 0x02, 0x80, 
        0xd9, 0x1a, 0x48, 0xbd, 0x37, 0xee, 0x96, 0xf4, 
        0x5f, 0x70, 0xc0, 0x7e, 0xb2, 0xbf, 0x5f, 0x35, 
    },
    {
        0x44, 0xe6, 0x5f, 0x45, 0x00, 0x90, 0x46, 0x41, 
        0x40, 0x1d, 0x3b, 0x06, 0xa1, 0x62, 0x13, 0xfe, 
        0x05, 0x85, 0x02, 0x39, 0x48, 0x05, 0x08, 0x0c, 
        0x4f, 0x14, 0x00, 0x00, 0x88, 0x34, 0x18, 0x58, 
    },
    {
        0x77, 0x30, 0x15, 0xd8, 0x0e, 0xbd, 0xfb, 0x4b, 
        0x90, 0x8a, 0x00, 0x85, 0x00, 0xc1, 0x1d, 0xe6, 
        0x14, 0xed, 0x86, 0xb3, 0x72, 0xff, 0x9b, 0x63, 
        0x92, 0xfd, 0xbe, 0xd9, 0x7b, 0x88, 0x92, 0x0a, 
    },
    {
        0xfe, 0xd3, 0xb2, 0x1c, 0x80, 0xb9, 0x7a, 0x17, 
        0xc9, 0x82, 0x17, 0xdc, 0xfb, 0xff, 0x80, 0x39, 
        0x60, 0x42, 0x0c, 0x59, 0x01, 0x0f, 0xdf, 0x37, 
        0xa3, 0x94, 0x50, 0xb1, 0x23, 0x06, 0x07, 0x23, 
    },
    {
        0x5a, 0xf8, 0x02, 0x31, 0xf0, 0x01, 0x02, 0x31, 
        0x40, 0x00, 0x82, 0x1e, 0x0a, 0x3a, 0x6a, 0x05, 
        0x84, 0x5b, 0x80, 0x12, 0x02, 0x80, 0x14, 0xa7, 
        0x12, 0x26, 0x4b, 0xa0, 0x69, 0x10, 0x01, 0x90, 
    },
    {
        0x00, 0x10, 0x8a, 0x84, 0x02, 0x18, 0x80, 0x3f, 
        0x08, 0x07, 0x40, 0x42, 0x10, 0x01, 0x14, 0x4e, 
        0xb0, 0x80, 0x00, 0x18, 0x10, 0xc5, 0x81, 0x02, 
        0x02, 0x82, 0x29, 0x10, 0x10, 0x02, 0x00, 0x88, 
    },
    {
        0x20, 0x00, 0x42, 0x00, 0x80, 0x02, 0x00, 0x11, 
        0x00, 0xe0, 0x13, 0x44, 0x04, 0x58, 0x02, 0xfe, 
        0x07, 0x3c, 0x28, 0x30, 0x98, 0x97, 0x73, 0x04, 
        0xd1, 0xce, 0x13, 0xcb, 0x10, 0x62, 0x1f, 0x43, 
    },
    {
        0x8d, 0x27, 0xac, 0x55, 0x2e, 0x42, 0x92, 0xc8, 
        0x80, 0x53, 0x88, 0x02, 0x39, 0x40, 0x51, 0x78, 
        0x2c, 0x29, 0x88, 0x80, 0x00, 0xb9, 0x28, 0x24, 
        0x41, 0x0c, 0x0e, 0x08, 0x21, 0x44, 0x00, 0x42, 
    },
    {
        0x08, 0x04, 0x68, 0x08, 0x06, 0x00, 0x04, 0x12, 
        0x31, 0x30, 0x90, 0x02, 0x3e, 0x5b, 0x85, 0xe0, 
        0x36, 0x29, 0x44, 0x10, 0x14, 0x28, 0x82, 0x10, 
        0x66, 0x42, 0x34, 0x83, 0x3c, 0x01, 0x1b, 0x53, 
    },
    {
        0x04, 0x04, 0x0d, 0x0e, 0x22, 0x0c, 0x51, 0x00, 
        0x12, 0x00, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x88, 
        0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0xf6, 0xdf, 0x47, 0x54, 0x68, 0x88, 0x08, 0x00, 
    },
    {
        0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 
        0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
        0x00, 0x06, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x40, 0x10, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0xff, 0xef, 0xfd, 0xf7, 
        0x7f, 0xff, 0xfe, 0xff, 0xff, 0xfb, 0xff, 0xff, 
    },
    {
        0xff, 0xfd, 0xff, 0xbf, 0xff, 0xff, 0xff, 0x00, 
        0xc2, 0x12, 0x20, 0x04, 0x06, 0x0c, 0x08, 0x07, 
        0x24, 0x16, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0xe0, 0xfe, 0xff, 0xff, 0xff, 
        0xff, 0xff, 0x79, 0x7f, 0xdf, 0x28, 0xf9, 0x00, 
        0x32, 0x0c, 0x12, 0x80, 0x08, 0x00, 0x3a, 0xd5, 
        0x58, 0xd8, 0xc2, 0xec, 0x18, 0x9d, 0xa8, 0x2f, 
    },
    {
        0x20, 0x96, 0x10, 0xe0, 0x0c, 0xd6, 0x22, 0x26, 
        0x97, 0x0f, 0x06, 0x02, 0x40, 0xb2, 0x55, 0x90, 
        0xa2, 0x80, 0x11, 0x50, 0x00, 0x98, 0x04, 0x04, 
        0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0xc0, 0xfb, 0xff, 0xff, 
        0xfe, 0xef, 0xfb, 0xdf, 0x08, 0x0b, 0x43, 0x62, 
        0xb6, 0x41, 0x3b, 0xfb, 0x74, 0x6f, 0x89, 0x23, 
    },
    {
        0x7f, 0xae, 0xd7, 0xec, 0x47, 0xe0, 0x60, 0x59, 
        0x96, 0xa0, 0x8f, 0x09, 0x2c, 0x61, 0x30, 0xa0, 
        0x0d, 0x09, 0xaa, 0x2a, 0x4e, 0xd4, 0x7b, 0x4f, 
        0xb2, 0xc4, 0x8b, 0x38, 0xc6, 0xa9, 0x10, 0x61, 
    },
    {
        0x14, 0x00, 0x00, 0x42, 0x0c, 0x80, 0x02, 0x02, 
        0x48, 0xfe, 0x85, 0x64, 0x3e, 0xd6, 0xf7, 0xe3, 
        0xa0, 0x3a, 0x07, 0x0c, 0x0c, 0xe4, 0x30, 0x04, 
        0x80, 0xf6, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 
        0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 
        0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 
        0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x04, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 
        0xe0, 0xff, 0xbd, 0xfe, 0xff, 0xff, 0xff, 0xff, 
        0x7f, 0x7f, 0xe7, 0xfb, 0xbf, 0xff, 0xff, 0xf7, 
    },
    {
        0xff, 0xff, 0xff, 0xef, 0x7e, 0xff, 0xf7, 0xdf, 
        0xf7, 0xf6, 0xdf, 0xfb, 0xfe, 0xbf, 0x4f, 0x80, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0xff, 0x7f, 
    },
    {
        0x7f, 0xff, 0xf7, 0xb6, 0x06, 0x44, 0x7e, 0xb8, 
        0xf5, 0x3b, 0x31, 0x88, 0x96, 0x17, 0xf4, 0x00, 
        0x60, 0xa9, 0x91, 0x13, 0x80, 0x00, 0x49, 0x72, 
        0xf3, 0xf2, 0x24, 0x00, 0x01, 0x87, 0xc8, 0x42, 
    },
    {
        0xd3, 0xe3, 0x48, 0x50, 0x00, 0x24, 0x05, 0x43, 
        0x00, 0x00, 0x4c, 0x4a, 0x27, 0x02, 0x58, 0x10, 
        0x20, 0x28, 0x16, 0x01, 0x09, 0xa8, 0x14, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0xc0, 0x3e, 0x68, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 
        0xff, 0xb7, 0xdb, 0xfd, 0xf7, 0x00, 0x00, 0x00, 
        0x00, 0x40, 0x2e, 0xc7, 0x80, 0x01, 0x00, 0x00, 
    },
    {
        0x00, 0x20, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 
        0x00, 0x00, 0x30, 0x00, 0xa8, 0xff, 0xf7, 0xb4, 
        0xf3, 0xad, 0xff, 0x03, 0x20, 0x01, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xfb, 0xff, 
        0xf7, 0x9d, 0xcf, 0xfd, 0xbf, 0x01, 0xc3, 0x15, 
        0x27, 0x18, 0x0a, 0x81, 0x42, 0xa8, 0x00, 0x0a, 
    },
    {
        0x08, 0x81, 0x08, 0x80, 0x08, 0x80, 0x04, 0x18, 
        0xbe, 0xa3, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 
        0xe6, 0x69, 0x37, 0xdc, 0xff, 0x6b, 0xff, 0x3d, 
        0xf8, 0xfc, 0xf9, 0xf3, 0x04, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
    {
        0x00, 0x00, 0x00, 0x80, 0x6f, 0xbf, 0xee, 0xe7, 
        0xfe, 0xdf, 0xa2, 0x5d, 0xd8, 0x3f, 0x0b, 0xc0, 
        0x84, 0x09, 0x0c, 0xa0, 0x40, 0x00, 0x10, 0x69, 
        0x10, 0xe2, 0x12, 0xb9, 0xa5, 0x86, 0x00, 0x5a, 
    },
    {
        0x00, 0x68, 0x89, 0x02, 0x05, 0x90, 0x80, 0x6a, 
        0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 
        0xf9, 0x1f, 0x00, 0x8e, 0x01, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    },
};
const u16 ucs2_index_table_4E00_9FFF[0xA0 - 0x4E][4] = 
{
    {0x0000, 0x002c, 0x0049, 0x006d, },
    {0x0096, 0x00b6, 0x00d8, 0x00f1, },
    {0x010e, 0x0124, 0x0134, 0x0141, },
    {0x014c, 0x0152, 0x0175, 0x0195, },
    {0x01b1, 0x01d5, 0x01eb, 0x0203, },
    {0x0212, 0x022a, 0x0251, 0x0268, },
    {0x0291, 0x02bc, 0x02db, 0x02fe, },
    {0x0325, 0x033e, 0x0358, 0x0373, },
    {0x0390, 0x03a7, 0x03ba, 0x03c3, },
    {0x03da, 0x03f0, 0x0410, 0x0428, },
    {0x043e, 0x044e, 0x0459, 0x0467, },
    {0x0473, 0x048f, 0x04a8, 0x04c4, },
    {0x04d8, 0x04ef, 0x04fe, 0x0507, },
    {0x0517, 0x051d, 0x0539, 0x0561, },
    {0x0579, 0x0596, 0x05b0, 0x05cc, },
    {0x05da, 0x05ec, 0x05f8, 0x05fc, },
    {0x0612, 0x062f, 0x0643, 0x0662, },
    {0x0671, 0x068d, 0x06a5, 0x06c0, },
    {0x06df, 0x0700, 0x0720, 0x073a, },
    {0x0755, 0x0767, 0x0774, 0x077e, },
    {0x0788, 0x07a7, 0x07c8, 0x07e5, },
    {0x0810, 0x082b, 0x0845, 0x0865, },
    {0x087b, 0x0892, 0x08a3, 0x08b8, },
    {0x08c5, 0x08d5, 0x08ea, 0x0901, },
    {0x091d, 0x0937, 0x0950, 0x095e, },
    {0x096d, 0x0986, 0x09a6, 0x09c2, },
    {0x09dd, 0x09f7, 0x0a16, 0x0a26, },
    {0x0a38, 0x0a48, 0x0a58, 0x0a6d, },
    {0x0a7a, 0x0a86, 0x0a91, 0x0a9b, },
    {0x0a9b, 0x0aa6, 0x0ab6, 0x0acc, },
    {0x0ae2, 0x0b02, 0x0b1f, 0x0b43, },
    {0x0b66, 0x0b80, 0x0b9e, 0x0bbc, },
    {0x0bd6, 0x0bef, 0x0bfd, 0x0c13, },
    {0x0c2a, 0x0c3c, 0x0c4c, 0x0c58, },
    {0x0c62, 0x0c68, 0x0c76, 0x0c8f, },
    {0x0ca5, 0x0cb3, 0x0cc3, 0x0cd0, },
    {0x0cd9, 0x0ce8, 0x0cff, 0x0d11, },
    {0x0d2f, 0x0d4a, 0x0d53, 0x0d67, },
    {0x0d78, 0x0d8e, 0x0d9c, 0x0da9, },
    {0x0db7, 0x0dd2, 0x0de6, 0x0e07, },
    {0x0e25, 0x0e43, 0x0e52, 0x0e63, },
    {0x0e7e, 0x0e95, 0x0ea9, 0x0ebf, },
    {0x0ed2, 0x0ef2, 0x0f04, 0x0f1c, },
    {0x0f2b, 0x0f35, 0x0f4d, 0x0f5b, },
    {0x0f73, 0x0f87, 0x0f92, 0x0faa, },
    {0x0fb9, 0x0fd5, 0x0fee, 0x1004, },
    {0x1016, 0x1021, 0x1029, 0x103f, },
    {0x1051, 0x1057, 0x1059, 0x105b, },
    {0x105b, 0x105c, 0x105e, 0x107d, },
    {0x10b9, 0x10ef, 0x1105, 0x1119, },
    {0x112d, 0x1150, 0x115f, 0x1183, },
    {0x11a9, 0x11c0, 0x11dc, 0x11ed, },
    {0x11fe, 0x1221, 0x1235, 0x125a, },
    {0x127c, 0x129e, 0x12c1, 0x12dc, },
    {0x12f4, 0x130a, 0x131d, 0x1330, },
    {0x1343, 0x1353, 0x1362, 0x1370, },
    {0x137b, 0x1382, 0x1396, 0x13af, },
    {0x13cc, 0x13e8, 0x13fc, 0x140e, },
    {0x141c, 0x1427, 0x143f, 0x1450, },
    {0x1469, 0x1478, 0x147f, 0x1482, },
    {0x149c, 0x149f, 0x14a1, 0x14a4, },
    {0x14a4, 0x14a6, 0x14a8, 0x14c5, },
    {0x1502, 0x1538, 0x1547, 0x154e, },
    {0x154e, 0x1570, 0x159b, 0x15ad, },
    {0x15cb, 0x15e0, 0x15f7, 0x1604, },
    {0x1605, 0x1605, 0x161e, 0x1644, },
    {0x1667, 0x168b, 0x16a2, 0x16c1, },
    {0x16db, 0x16e4, 0x1709, 0x171d, },
    {0x1726, 0x1726, 0x1727, 0x1729, },
    {0x172a, 0x172b, 0x172c, 0x172d, },
    {0x172f, 0x1730, 0x1731, 0x1769, },
    {0x17a2, 0x17dd, 0x180c, 0x180c, },
    {0x1822, 0x184b, 0x1868, 0x187c, },
    {0x1893, 0x18a8, 0x18b7, 0x18c5, },
    {0x18cf, 0x18cf, 0x18da, 0x18fc, },
    {0x1908, 0x190b, 0x1923, 0x193a, },
    {0x193a, 0x193a, 0x194d, 0x1975, },
    {0x1986, 0x1990, 0x199c, 0x199c, },
    {0x199c, 0x199c, 0x199e, 0x19cb, },
    {0x19e3, 0x19e3, 0x19e3, 0x19e3, },
    {0x19e3, 0x19fd, 0x1a22, 0x1a30, },
    {0x1a47, 0x1a57, 0x1a5b, 0x1a6b, },
};
