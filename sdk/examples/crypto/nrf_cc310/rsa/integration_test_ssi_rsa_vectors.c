/*
 * Copyright (c) 2016 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is confidential property of Nordic Semiconductor. The use,
 * copying, transfer or disclosure of such information is prohibited except by express written
 * agreement with Nordic Semiconductor.
 *
 */
#include "ssi_pal_types.h"
#include "integration_test_ssi_data.h"

rsaEncDecDataStuct rsaEncDecDataVectors[] = {
	{
	{"Integration RSA encrypt/decrypt test - RSA key 512bit "},
        /*TST_PrivetExponent_D*/
        {0xa8,0xd6,0xfa,0x2b,0x47,0xde,0x8c,0x36,0x04,0x2a,0x32,0x55,0x7c,0xf5,0xde,0x2e,
         0xe3,0xc1,0x62,0x72,0x83,0x55,0x27,0x76,0x9f,0x6b,0xe0,0xfa,0x9a,0x26,0x03,0x9b,
         0x41,0x1f,0xd6,0xbc,0x3d,0x77,0xd0,0x5f,0xb0,0x71,0x00,0xf6,0x27,0xa7,0x55,0xf8,
         0xb4,0xc7,0x5a,0x31,0xeb,0xce,0x51,0x19,0x94,0x21,0xa6,0xac,0xb8,0xf5,0xbb,0x01},
        /*TST_PublicExponent_E*/
        {0x01,0x00,0x01},
        /*TST_Modulus_N*/
        {0xbb,0x3d,0xf1,0x3f,0x1d,0xcf,0xc6,0xfa,0x13,0x56,0xb3,0x95,0x53,0xcf,0xbd,0x10,
         0xf4,0x75,0xfe,0x7d,0xf6,0x89,0xa1,0x06,0x94,0x67,0xd4,0x5c,0xb7,0x89,0xbe,0xed,
         0xe2,0x49,0x51,0x6b,0xf0,0xd2,0x7c,0xef,0x67,0xbb,0xf6,0x9a,0x8b,0x67,0x51,0xe8,
         0xc0,0xbf,0x52,0xbc,0x2f,0x10,0xc1,0x85,0x77,0x18,0x60,0x52,0x67,0x94,0xd7,0x57},
        /*TST_P*/
        {0xf4,0xab,0x4e,0xda,0x43,0xf4,0xcd,0x34,0xb1,0xd8,0xf4,0xd6,0x97,0xea,0x6f,0x07,
         0xc8,0xfd,0xa6,0x28,0x33,0x4c,0xaf,0x60,0x9b,0x0c,0x48,0x79,0x0a,0xb0,0x14,0xb1},
        /*TST_Q*/
        {0xc3,0xe9,0xcd,0x5a,0xef,0xa1,0x27,0x15,0xbf,0x34,0xc0,0xca,0x41,0x79,0x39,0x19,
         0xf6,0xd2,0x12,0x14,0x14,0x29,0x8e,0x36,0x06,0xa8,0xd3,0xe5,0x90,0x2c,0x4e,0x87},
        /*TST_dP*/
        {0x40,0xa1,0x80,0x12,0xe8,0x20,0xa2,0x94,0x68,0xe6,0x86,0xc6,0xa9,0x1a,0xa4,0x79,
         0xc9,0xfe,0x37,0x06,0x27,0x86,0xfa,0x4c,0xea,0xa8,0x33,0xfc,0xc5,0x75,0xfe,0x01},
        /*TST_dQ*/
        {0x59,0x58,0x87,0x0e,0xb1,0xba,0x0c,0xd9,0x1e,0x1a,0x30,0xd2,0x0c,0x89,0xfc,0x40,
         0x9b,0x0f,0xb2,0xae,0xf5,0x82,0xfe,0x18,0x25,0x71,0x59,0x31,0x98,0x4e,0x9c,0x81},
        /*TST_Qinv*/
        {0xa5,0x61,0xd2,0x0d,0x6d,0xe7,0x20,0xa5,0xaf,0x9b,0x59,0x8c,0x98,0xa4,0x6a,0x4a,
         0xaf,0x76,0xab,0x60,0x57,0xd4,0xdc,0x71,0xb5,0x1d,0xf2,0xac,0x22,0x0a,0xb6,0xf5},
        /*TST_KeySize*/
        64*sizeof(uint8_t),
        /*TST_DPSize*/
        32*sizeof(uint8_t),
        /*TST_PubExponentSize*/
        3*sizeof(uint8_t),
        /*TST_input_data*/
        {0x41,0x1f,0xd6,0xbc,0x3d,0x77,0xd0,0x5f,0xb0,0x71,0x00,0xf6,0x27,0xa7,0x55,0xf8,
         0xb4,0xc7,0x5a,0x31,0xeb,0xce,0x51,0x19,0x94,0x21,0xa6,0xac,0xb8,0xf5,0xbb,0x01,
         0xa8,0xd6,0xfa,0x2b,0x47,0xde,0x8c,0x36,0x04,0x2a,0x32,0x55,0x7c,0xf5,0xde,0x2e,
         0xe3,0xc1,0x62,0x72,0x83,0x55,0x27,0x76,0x9f,0x6b,0xe0,0xfa,0x9a,0x26,0x03,0x9b},
        /*TST_output_data*/
        {0},
        /*TST_Expected_output_data*/
        {0x2d,0x99,0x04,0x94,0x8a,0x57,0x89,0x78,0xed,0x8a,0xdd,0xea,0x63,0xf5,0xe5,0x50,
         0xea,0xb5,0x83,0x89,0xb6,0xcc,0xa9,0x84,0x73,0x1d,0x1f,0x02,0x04,0x37,0x53,0xce,
         0xd6,0xa4,0xa8,0x96,0x20,0x00,0xdd,0xb3,0x91,0x67,0xac,0xbc,0xd4,0x3d,0x22,0x95,
         0x1f,0x2a,0x6c,0x17,0x10,0x35,0xa8,0x7e,0x10,0xab,0x53,0xeb,0xb4,0xef,0x27,0xcf}
    },
    {
        {"Integration RSA encrypt/decrypt test - RSA key 1024bit "},
        /*TST_PrivetExponent_D*/
        {0x0e,0x85,0x98,0x0c,0x64,0xed,0x94,0x26,0x69,0x65,0x35,0x7b,0x14,0x8d,0x78,0x58,
         0x1f,0xcc,0xaf,0x34,0x9d,0xbb,0x97,0x5d,0xdb,0xd4,0x54,0xbf,0xd3,0x14,0x30,0xf7,
         0xbc,0xad,0x1f,0x90,0x8f,0xf6,0xa4,0xad,0xec,0x59,0x63,0x6f,0xd0,0xb5,0x4b,0xc8,
         0x14,0x61,0x41,0x84,0x7a,0x1b,0xbf,0x74,0xa7,0x83,0x82,0x12,0x6a,0x78,0x2c,0xb3,
         0xd7,0xe3,0x72,0xfd,0x8c,0x14,0x6b,0x8d,0x0c,0xa4,0x78,0x16,0x78,0x13,0x23,0xe6,
         0x00,0xe7,0x29,0xc5,0xc9,0xe7,0xa7,0x88,0x4d,0x9a,0x35,0x16,0xf9,0xb8,0x10,0x76,
         0xdf,0x9b,0xbb,0x1d,0x3e,0xdf,0x80,0x67,0xf1,0x0f,0xe7,0xc7,0x2a,0x14,0x70,0x30,
         0x09,0xd0,0x38,0xd3,0x95,0xe7,0x2f,0x37,0x76,0x78,0xc1,0xf9,0xaf,0x1a,0x81,0xa1},
        /*TST_PublicExponent_E*/
        {0x01,0x00,0x01},
        /*TST_Modulus_N*/
        {0xe6,0xf1,0x8f,0xaf,0x4d,0xb6,0x24,0xa6,0x94,0x71,0xfb,0xeb,0x01,0x56,0xb6,0xdb,
         0xca,0xdf,0xf2,0x2a,0x6c,0xb9,0x6f,0xd8,0x70,0xf2,0x8e,0x44,0x32,0xb1,0x0c,0x1b,
         0xee,0xa8,0xdc,0x03,0x33,0x72,0xe6,0xc0,0x83,0xa7,0x47,0x34,0x01,0x10,0x1e,0xa6,
         0x1f,0x04,0xe6,0xb3,0x41,0xec,0x97,0x59,0xf2,0xf6,0xf7,0x7c,0x16,0xc5,0xdd,0x97,
         0xf5,0xdb,0x6c,0x60,0xbd,0x53,0xbc,0xa9,0xbd,0xd7,0xae,0xbf,0x70,0xf3,0x38,0xf4,
         0xb4,0x5a,0x25,0x9c,0xcf,0xf1,0x2f,0xaf,0xdb,0x5d,0x43,0x5a,0xeb,0x07,0x5d,0xa7,
         0xd8,0x44,0xa1,0x50,0x2a,0x98,0xba,0xba,0x81,0xc1,0x61,0x87,0x09,0x3b,0x54,0x8c,
         0x20,0xde,0xc3,0x62,0x64,0xcf,0xc0,0x3f,0xe7,0x97,0xa7,0x7d,0x65,0x8e,0x31,0xeb},
        /*TST_P*/
        {0xff,0x33,0xf2,0x64,0x08,0xeb,0x67,0xb4,0xf8,0xec,0xa8,0x0a,0x19,0x60,0xb3,0xaa,
         0x9b,0x3d,0x03,0x65,0x43,0x4e,0x93,0xb6,0x20,0x38,0xe5,0xc1,0x1a,0xca,0xc0,0xb0,
         0xf2,0x6d,0x78,0xbf,0x18,0x5d,0x3d,0xa6,0xd3,0x31,0xe8,0xc8,0x36,0xc7,0xf6,0xb2,
         0xfd,0x5a,0x02,0x28,0x08,0xdc,0x57,0xb6,0x44,0x5d,0x3a,0x70,0x7d,0xfa,0x49,0x91},
        /*TST_Q*/
        {0xe7,0xaa,0x37,0xa4,0x6d,0x38,0x16,0x3f,0x3d,0x76,0x61,0x48,0xce,0x8e,0xdb,0x71,
         0x2f,0x37,0xed,0x8a,0x9f,0xfd,0x47,0x4e,0xb4,0x37,0x05,0x60,0xbc,0x7a,0xd8,0xca,
         0x6a,0x2e,0xb4,0x37,0x3e,0xc9,0xea,0x12,0x49,0x40,0x37,0x24,0x36,0x4d,0xb4,0x6a,
         0x40,0xc2,0xe5,0xe4,0x26,0xf9,0xdc,0x8a,0x07,0x9a,0x10,0x76,0x81,0x50,0xa5,0xbb},
        /*TST_dP*/
        {0x4a,0x3a,0x5b,0xc8,0x48,0xe7,0xdf,0x94,0x3d,0xca,0xe7,0xdd,0x78,0x20,0x2e,0x61,
         0xf3,0x21,0x3d,0xf9,0x98,0x28,0x24,0xc2,0x96,0x80,0xb6,0x23,0x02,0x9d,0xf2,0x8a,
         0x05,0x19,0x5e,0x43,0x86,0xdc,0xa7,0xef,0xfc,0x01,0xca,0x49,0x61,0xd5,0xab,0xa5,
         0xc8,0x17,0x04,0x05,0x8c,0xfe,0x39,0xec,0xe3,0xd9,0x92,0x03,0xe2,0x40,0x88,0x61},
        /*TST_dQ*/
        {0x36,0x0b,0x6e,0xc9,0xac,0x35,0x2e,0x73,0x78,0x6a,0x3a,0x8d,0xda,0xaa,0x57,0x25,
         0x53,0x87,0xaf,0xa1,0xec,0x6b,0x11,0x0c,0x9a,0x5c,0x4f,0xa3,0xde,0xb4,0xa6,0x08,
         0xaa,0xb6,0xd4,0x92,0x22,0xd2,0xc6,0x09,0x98,0x0f,0x24,0x0e,0x0d,0xa1,0x19,0x1a,
         0xc4,0x9a,0xf3,0x38,0xc3,0xa2,0xfc,0xc1,0x32,0xbe,0xcd,0x62,0x68,0x0e,0xa1,0x6b},
        /*TST_Qinv*/
        {0x3e,0xd1,0x50,0xec,0x76,0x0d,0xc9,0x46,0x57,0x0a,0xc9,0x73,0x16,0xdd,0x38,0x03,
         0x9d,0x36,0x61,0x19,0x08,0x6d,0x07,0x99,0xe6,0x97,0xfb,0x85,0x82,0x1d,0x00,0x7e,
         0xbe,0x17,0x7c,0x87,0xa7,0xb7,0xb2,0xaa,0x40,0x22,0xa5,0x53,0x52,0xc8,0x0b,0xf1,
         0x79,0x3a,0x24,0xa7,0xc9,0xcb,0x22,0xda,0x9a,0x17,0xc1,0x78,0xdd,0x9d,0x16,0x7d},
        /*TST_KeySize*/
        128*sizeof(uint8_t),
        /*TST_DPSize*/
        64*sizeof(uint8_t),
        /*TST_PubExponentSize*/
        3*sizeof(uint8_t),
        /*TST_input_data*/
        {0x98,0x62,0xed,0xc7,0x71,0x65,0x13,0xfb,0x51,0x62,0x3e,0xa5,0xfd,0xee,0xe3,0x8f,
         0x68,0x89,0xc7,0x74,0xed,0x81,0xce,0x57,0x8f,0x12,0xe1,0x08,0x84,0xdf,0x5e,0x44,
         0x69,0xba,0x6b,0x1a,0x3d,0x5c,0xe6,0x3e,0x82,0x51,0xd1,0x9f,0x07,0x74,0x48,0x20,
         0x4b,0x2b,0x4e,0x78,0x07,0x90,0xdd,0xfc,0x47,0x6b,0x99,0xe0,0xbb,0x94,0xd7,0x45,
         0x7f,0xb7,0xe3,0xca,0x94,0xb8,0x8e,0x7b,0x89,0x62,0xba,0x10,0x7d,0x7b,0x6d,0xb9,
         0x74,0x92,0xfa,0xcd,0xb4,0x26,0x22,0x91,0x74,0x41,0xe0,0xff,0xe3,0x63,0xe2,0x12,
         0xe4,0x2f,0x78,0x6a,0xb2,0x45,0x18,0x1e,0x81,0x58,0x07,0xc7,0x94,0xef,0x30,0x19,
         0x4c,0x1f,0x0c,0x44,0x45,0x83,0x43,0x4b,0xe2,0xce,0x0d,0xe4,0x71,0xe5,0x56,0x9d},
        /*TST_output_data*/
        {0},
        /*TST_Expected_output_data*/
        {0x65,0x8f,0xdc,0xcc,0x47,0x1f,0x35,0x16,0xa0,0xd8,0xde,0x08,0xc1,0x02,0xd7,0x7d,
         0x90,0x24,0x3f,0xb2,0x28,0xff,0x80,0xa9,0x46,0xc0,0xc4,0x3f,0x79,0x28,0x3c,0x6c,
         0x21,0x8f,0xa7,0xbf,0x90,0x14,0x68,0xc6,0x9a,0xfb,0x54,0x78,0x5d,0xab,0x4b,0x6e,
         0x0b,0x35,0x24,0x89,0x55,0x9e,0x93,0x44,0x23,0x06,0xd8,0xd5,0x19,0xf2,0x0b,0x97,
         0xf4,0x86,0x8e,0x7b,0x28,0x33,0x33,0x56,0x58,0x19,0xee,0xa5,0x75,0x17,0x22,0x2c,
         0x50,0xad,0xd5,0x8b,0xa0,0x42,0xea,0x98,0x96,0xc0,0x01,0x0e,0xa5,0xdf,0x67,0x41,
         0x9a,0x10,0x71,0x1b,0xd4,0xeb,0x4d,0xeb,0xe9,0xce,0xbe,0xc3,0x1e,0x35,0xcc,0x6e,
         0x58,0xd9,0x3b,0xe3,0x52,0x88,0xbb,0x0e,0x04,0x02,0xbd,0x7c,0xfe,0xa5,0x6f,0xf5}
    },

};

#if 1

rsaSignVerifyDataStuct rsaSignVerifyDataVectors[] = {


	{
		{"Acceptance test - RSA SignVerify 512byteData/2048bit key "},
		/*TST_PrivetExponent_D*/
		{0x8f,0x19,0xde,0xd8,0x8f,0xf5,0x9c,0xba,0x8a,0xe5,0xf2,0x2d,0x24,0x26,0xa4,0x9f,
		0x09,0x9d,0x60,0x6e,0x5e,0xee,0xbd,0x6f,0xf9,0x22,0xe4,0x74,0xea,0xcc,0x00,0x8b,
		0x16,0x68,0x20,0x37,0xcc,0x07,0xa5,0xd8,0x6a,0x63,0xdf,0x85,0x2f,0xd1,0x35,0xe7,
		0x5a,0x32,0x9e,0x3e,0x48,0xc5,0x95,0xc9,0x1e,0x6c,0xcb,0xf4,0xf7,0xa7,0xb1,0xa6,
		0x06,0xde,0xcd,0x98,0x86,0x72,0x39,0xe8,0x38,0x37,0x24,0xf4,0xa0,0xb3,0x63,0x02,
		0x6d,0x6b,0xca,0xb3,0x74,0xdb,0xd4,0xf9,0xbd,0x44,0xac,0x12,0x48,0x1b,0x9a,0xc9,
		0xb7,0x24,0x05,0x47,0xaf,0x96,0xbe,0xc4,0x1f,0xdb,0x14,0xbf,0x8d,0xce,0x06,0x16,
		0x6b,0x15,0x6d,0x69,0xce,0x44,0xaf,0xb3,0x0f,0x46,0x29,0x54,0x08,0xb0,0xc0,0x94,
		0x5b,0xd5,0xe9,0x23,0xf4,0x7c,0x58,0x0e,0xe3,0xd9,0xc1,0xee,0x83,0x9e,0x5e,0x37,
		0x98,0xb8,0xed,0x8e,0x96,0xb8,0x30,0xfe,0x07,0xdb,0xbb,0x72,0x6e,0x3b,0x00,0x3c,
		0x57,0x31,0xd0,0xcf,0xbc,0xea,0x60,0xe7,0xd7,0x81,0x2c,0x70,0x2f,0x96,0x9b,0xb1,
		0x77,0x76,0x18,0x07,0x71,0x6c,0xda,0x06,0x17,0x33,0x79,0x86,0x78,0xa0,0xfb,0x48,
		0x55,0xa4,0xe4,0x9f,0xe5,0x52,0xd6,0xea,0xbb,0xaa,0x8e,0xee,0xdd,0xce,0x50,0x2a,
		0xcd,0xb9,0x8d,0x65,0x87,0x5b,0x1b,0x3b,0x76,0xaf,0x0c,0x1d,0x24,0x0f,0x52,0x9a,
		0x80,0x15,0x88,0x92,0x80,0x5c,0xf5,0x7c,0x70,0xb9,0x9b,0xaa,0xb4,0x8e,0x6c,0x95,
		0x35,0x92,0x42,0xb5,0xe2,0xf3,0x9a,0x6f,0x51,0x28,0x19,0x34,0x3b,0xef,0x95,0x29},
		/*TST_PublicExponent_E*/
		{0x01,0x00,0x01},
		/*TST_Modulus_N*/
		{0xb0,0x8a,0x9f,0x8c,0xb9,0x40,0xc6,0x8b,0x33,0x31,0xd4,0x30,0xdb,0x4d,0x5f,0x72,
		0xd0,0x5d,0xba,0xd8,0x97,0x88,0xbd,0xb5,0x58,0xc3,0xf2,0xcb,0x85,0xb2,0xb5,0xa9,
		0x97,0x16,0x22,0xfe,0xc8,0x30,0x3c,0xd5,0xde,0x5a,0xe7,0xc0,0x45,0x31,0x74,0xc3,
		0x2b,0x91,0x88,0x00,0x61,0x7a,0x6b,0x7c,0x89,0xdf,0x0f,0x22,0xa6,0xce,0xe7,0xca,
		0xf4,0x73,0xed,0xa0,0x70,0x78,0x34,0xfb,0x77,0x45,0xaa,0x13,0x77,0x95,0x6b,0xe6,
		0xc5,0x0f,0x4f,0x81,0x50,0xdd,0x42,0x4d,0x78,0xb4,0x1f,0x20,0x2f,0xdf,0x17,0x2b,
		0xdb,0x7f,0xe4,0xc2,0xf6,0x3b,0xe4,0x6e,0x0a,0x47,0xa9,0x59,0x03,0xb6,0xa2,0x8c,
		0x13,0x28,0xdc,0xdc,0x66,0x85,0x9a,0x18,0x99,0xd4,0x1a,0x0d,0x6f,0x7b,0x59,0x3c,
		0x58,0x39,0xe9,0x82,0xa4,0xd8,0x8d,0xcc,0xd5,0xcb,0x6a,0x6c,0x48,0x0a,0x0d,0x5e,
		0x15,0x27,0xe3,0x57,0x62,0x7b,0x60,0xd9,0x97,0xdd,0x05,0x62,0xa2,0xe2,0xa6,0x0c,
		0x5b,0x74,0x72,0x44,0xc3,0x65,0x9f,0x55,0xa2,0x9e,0xbf,0x3b,0x2c,0xee,0xc6,0x47,
		0x2e,0x31,0x31,0x28,0xcd,0x70,0x22,0x44,0x2d,0xf4,0x86,0x55,0xcd,0xfa,0xc5,0x73,
		0xa9,0x4a,0x4d,0xd2,0x4f,0xaa,0xc7,0xbd,0xd4,0x0e,0x2a,0x31,0x5e,0x3b,0x0c,0xcb,
		0xd0,0x2c,0xe0,0xf5,0x4e,0x45,0xed,0x83,0x74,0x5d,0x55,0x2d,0x45,0xf8,0xc1,0xb4,
		0x74,0x9c,0xe0,0xf8,0xc7,0xb2,0x39,0x8b,0x37,0x15,0xd7,0x3a,0xa0,0x1e,0x0a,0xa4,
		0x81,0xcb,0x21,0x6f,0xe6,0x4c,0xaa,0xd7,0x83,0x26,0xaf,0x1e,0x0d,0x69,0x66,0xeb},
		/*TST_P*/
		{0xdb,0x11,0xac,0x82,0xcc,0xce,0xcd,0xd5,0xaa,0x91,0x86,0x6c,0x2e,0x7a,0x5c,0x85,
		0xcc,0xbe,0x04,0xd5,0xd0,0x94,0x70,0x3c,0x0e,0x7b,0x0d,0x21,0xf3,0x27,0x3d,0x61,
		0x9c,0x58,0x96,0x3f,0xb4,0x20,0x85,0xe2,0x67,0xe4,0x97,0xbf,0xa0,0xa7,0xa7,0x2d,
		0xba,0x6a,0x19,0x26,0x9f,0x20,0xd1,0xd5,0xc6,0xa8,0xa4,0xaa,0x9d,0x8d,0x7e,0x53,
		0xe1,0x16,0x23,0x29,0xfe,0xf8,0x69,0xcc,0x0a,0xa0,0x46,0x3b,0xd5,0x13,0x3b,0xec,
		0xa9,0xe2,0x97,0x4f,0xe1,0x49,0xd2,0x8c,0xad,0x7b,0x13,0x39,0x8b,0x94,0xd0,0xbb,
		0x52,0xc3,0x95,0xd7,0x44,0xb5,0xb0,0x89,0x55,0xd0,0x8a,0x71,0x5b,0xcf,0x52,0x33,
		0xd7,0x18,0x31,0xef,0xe6,0xe5,0xd7,0xbf,0xc2,0x78,0x93,0x12,0x81,0x97,0x8e,0x85},
		/*TST_Q*/
		{0xce,0x4d,0x98,0x66,0xf0,0x4c,0xe2,0xb8,0x12,0xf5,0x96,0x4c,0x25,0x5a,0x9d,0x75,
		0x4a,0x89,0x44,0xb9,0x70,0xad,0x16,0xd1,0xc2,0xcc,0x26,0x74,0xde,0x41,0xea,0x28,
		0x25,0x03,0xfc,0x6f,0x3e,0x2f,0xeb,0xb6,0x3d,0x91,0xff,0x6b,0xa5,0x26,0x52,0x6d,
		0x20,0xf3,0x65,0xb8,0xd6,0x99,0x02,0x51,0xfe,0x8f,0xef,0xd3,0xc3,0xb2,0xc3,0x73,
		0xf4,0xb9,0xb8,0x20,0x0d,0xa4,0x3d,0xc6,0x5d,0x62,0xc1,0x73,0xf7,0xeb,0x63,0xf9,
		0xdf,0x18,0xe9,0x5c,0xb1,0x94,0x8c,0x01,0x64,0xc0,0x80,0x60,0x65,0x53,0xf1,0x9e,
		0xa9,0x67,0x05,0xa6,0x7b,0x97,0x86,0x55,0xef,0xd5,0x60,0x6d,0x4c,0xc3,0xa4,0xb0,
		0x53,0x3a,0x18,0xfe,0xe8,0x64,0xb3,0xcd,0xa9,0x94,0xa3,0xad,0xe0,0xe5,0x32,0xaf},
		/*TST_dP*/
		{0xab,0xc0,0xe1,0x95,0xf3,0x69,0x38,0x6c,0x0a,0xbc,0xe9,0xbd,0x2b,0x7b,0x77,0xca,
		0xd7,0x49,0x2b,0x95,0x4f,0x60,0xf1,0xd5,0xc4,0x2c,0xa9,0x91,0x32,0x88,0x53,0x51,
		0x92,0x38,0xca,0x23,0xcb,0xdf,0xab,0xd8,0x64,0x48,0x0e,0xc9,0x88,0xf5,0xa8,0xd6,
		0xeb,0x4e,0x7f,0xc5,0x8e,0x01,0x37,0x42,0xf9,0xec,0x02,0x9e,0x59,0xc4,0x33,0x85,
		0x23,0xf6,0x2d,0x3f,0xa1,0xcd,0xb5,0x74,0xe9,0xe7,0xda,0xe8,0xd2,0x17,0xb0,0x65,
		0xce,0x93,0xfe,0xb9,0xfc,0x11,0xda,0xe7,0xbc,0xa3,0xbf,0xe0,0xe0,0x14,0x9e,0xca,
		0x1f,0x0b,0x85,0x11,0x2f,0xa7,0x9b,0x6f,0x31,0x3e,0xbd,0x2c,0x3f,0x24,0xfe,0x77,
		0xf2,0x6d,0xdf,0xc9,0x0d,0x28,0xaa,0xcc,0x87,0x75,0xed,0x29,0x17,0x3d,0x71,0xd9},
		/*TST_dQ*/
		{0xa9,0x2a,0x11,0x7c,0xdf,0x30,0x7c,0x7b,0xe9,0xf7,0xfd,0x2d,0x25,0x38,0x1f,0x83,
		0x2d,0x02,0x50,0x1b,0x2b,0x1c,0x93,0x68,0x9f,0x2d,0xdd,0x9e,0xd9,0x1c,0xfd,0x8f,
		0xbb,0x82,0x80,0x3d,0x0b,0xa6,0x29,0xc6,0xfe,0xc7,0xb7,0xc4,0xa1,0xe0,0x41,0x98,
		0x80,0x7b,0x74,0xfe,0xd2,0xe1,0x16,0x78,0xfb,0x9f,0x35,0x4d,0xd4,0xdb,0xc1,0xcf,
		0x54,0x6d,0xf1,0x60,0x3f,0x2f,0x5d,0x04,0x4a,0x51,0x0f,0x46,0x33,0x95,0x8e,0x1e,
		0x37,0x64,0xea,0xfd,0xfa,0x13,0x4f,0x96,0x58,0xf2,0x4c,0x92,0x3e,0xa4,0x4d,0xad,
		0x07,0x45,0x95,0xe9,0x84,0xd0,0xa3,0xf3,0xd5,0xbc,0x86,0xdc,0x39,0x24,0xf7,0xe7,
		0x29,0xe7,0xaa,0xd5,0x62,0xe4,0x28,0x57,0xcc,0xe5,0x38,0x2d,0xfd,0x0a,0x93,0xbb},
		/*TST_Qinv*/
		{0x78,0xe0,0x41,0x17,0x2c,0xc8,0x50,0x51,0x7b,0x2b,0x44,0x8c,0xff,0x55,0x31,0xc7,
		0x31,0xa6,0xca,0x58,0x79,0x25,0x33,0x91,0x91,0x1b,0xf2,0xc6,0xf9,0x8b,0xdb,0x8e,
		0xc6,0x94,0x96,0x7b,0xd0,0x14,0xc3,0xb6,0x59,0x57,0x04,0xf6,0x31,0x3b,0x92,0x04,
		0x06,0xa7,0xa1,0x9d,0x78,0x92,0x33,0xbf,0x4c,0xcb,0x3f,0x7d,0x86,0x83,0x3a,0x7b,
		0x92,0x09,0x30,0x9e,0xf5,0x91,0x01,0xa1,0xaf,0xff,0x08,0xed,0x2d,0x76,0x8a,0x69,
		0xfb,0x99,0x00,0x2c,0x3b,0x40,0x16,0x53,0xbb,0x9b,0xae,0x09,0xd3,0x2f,0x77,0xd7,
		0xb1,0x41,0x67,0x97,0x93,0x08,0xc8,0xcb,0xa8,0x32,0x4f,0xa9,0xb4,0x28,0x9f,0x1b,
		0x1d,0x47,0xdc,0xc2,0xa9,0x2a,0xa0,0x08,0xdc,0x4a,0xe5,0xc7,0x57,0x63,0x0a,0xc3},
		/*TST_KeySize*/
		256*sizeof(uint8_t),
		/*TST_DPSize*/
		128*sizeof(uint8_t),
		/*TST_PubExponentSize*/
		3*sizeof(uint8_t),
		/*TST_SaltLength*/
		20,
		/*TST_input_data*/
		{0xa3,0x03,0x83,0xc4,0x7c,0xd2,0xff,0x38,0x34,0xcf,0xbe,0xb1,0xc6,0xdb,0x6e,0x14,
		 0x9e,0xdf,0xbb,0xd7,0xc5,0xdf,0x8d,0x69,0x7a,0x07,0x75,0xbc,0xde,0x37,0x0c,0x75,
		 0x5c,0x71,0xdf,0x18,0x42,0x78,0x95,0x50,0xd2,0x42,0x91,0x47,0xb9,0x59,0xb1,0x75,
		 0xd5,0x8f,0x08,0xfe,0x60,0x56,0x47,0x64,0x27,0xbb,0xcb,0xb0,0x73,0x84,0x90,0x25,
		 0xb6,0xeb,0x68,0x11,0xba,0xd9,0xaf,0x99,0xe9,0x3f,0xfd,0x55,0x3b,0x65,0xf6,0xbb,
		 0x56,0x80,0x8c,0xc1,0xf4,0x7a,0xc4,0x50,0xd8,0x0c,0x54,0x24,0x7a,0x92,0x89,0x8a,
		 0x09,0x58,0x5d,0x5b,0x6d,0x34,0x74,0x62,0x0c,0xc1,0x5c,0xb5,0xe5,0x6e,0x08,0xc6,
		 0xc9,0xd6,0x16,0x3b,0x37,0xcf,0x63,0x19,0xb9,0xd4,0xe5,0xa7,0x92,0xa5,0x69,0x49,
		 0xa3,0x03,0x83,0xc4,0x7c,0xd2,0xff,0x38,0x34,0xcf,0xbe,0xb1,0xc6,0xdb,0x6e,0x14,
		 0x9e,0xdf,0xbb,0xd7,0xc5,0xdf,0x8d,0x69,0x7a,0x07,0x75,0xbc,0xde,0x37,0x0c,0x75,
		 0x5c,0x71,0xdf,0x18,0x42,0x78,0x95,0x50,0xd2,0x42,0x91,0x47,0xb9,0x59,0xb1,0x75,
		 0xd5,0x8f,0x08,0xfe,0x60,0x56,0x47,0x64,0x27,0xbb,0xcb,0xb0,0x73,0x84,0x90,0x25,
		 0xb6,0xeb,0x68,0x11,0xba,0xd9,0xaf,0x99,0xe9,0x3f,0xfd,0x55,0x3b,0x65,0xf6,0xbb,
		 0x56,0x80,0x8c,0xc1,0xf4,0x7a,0xc4,0x50,0xd8,0x0c,0x54,0x24,0x7a,0x92,0x89,0x8a,
		 0x09,0x58,0x5d,0x5b,0x6d,0x34,0x74,0x62,0x0c,0xc1,0x5c,0xb5,0xe5,0x6e,0x08,0xc6,
		 0xc9,0xd6,0x16,0x3b,0x37,0xcf,0x63,0x19,0xb9,0xd4,0xe5,0xa7,0x92,0xa5,0x69,0x49,
		 0xa3,0x03,0x83,0xc4,0x7c,0xd2,0xff,0x38,0x34,0xcf,0xbe,0xb1,0xc6,0xdb,0x6e,0x14,
		 0x9e,0xdf,0xbb,0xd7,0xc5,0xdf,0x8d,0x69,0x7a,0x07,0x75,0xbc,0xde,0x37,0x0c,0x75,
		 0x5c,0x71,0xdf,0x18,0x42,0x78,0x95,0x50,0xd2,0x42,0x91,0x47,0xb9,0x59,0xb1,0x75,
		 0xd5,0x8f,0x08,0xfe,0x60,0x56,0x47,0x64,0x27,0xbb,0xcb,0xb0,0x73,0x84,0x90,0x25,
		 0xb6,0xeb,0x68,0x11,0xba,0xd9,0xaf,0x99,0xe9,0x3f,0xfd,0x55,0x3b,0x65,0xf6,0xbb,
		 0x56,0x80,0x8c,0xc1,0xf4,0x7a,0xc4,0x50,0xd8,0x0c,0x54,0x24,0x7a,0x92,0x89,0x8a,
		 0x09,0x58,0x5d,0x5b,0x6d,0x34,0x74,0x62,0x0c,0xc1,0x5c,0xb5,0xe5,0x6e,0x08,0xc6,
		 0xc9,0xd6,0x16,0x3b,0x37,0xcf,0x63,0x19,0xb9,0xd4,0xe5,0xa7,0x92,0xa5,0x69,0x49,
		 0xa3,0x03,0x83,0xc4,0x7c,0xd2,0xff,0x38,0x34,0xcf,0xbe,0xb1,0xc6,0xdb,0x6e,0x14,
		 0x9e,0xdf,0xbb,0xd7,0xc5,0xdf,0x8d,0x69,0x7a,0x07,0x75,0xbc,0xde,0x37,0x0c,0x75,
		 0x5c,0x71,0xdf,0x18,0x42,0x78,0x95,0x50,0xd2,0x42,0x91,0x47,0xb9,0x59,0xb1,0x75,
		 0xd5,0x8f,0x08,0xfe,0x60,0x56,0x47,0x64,0x27,0xbb,0xcb,0xb0,0x73,0x84,0x90,0x25,
		 0xb6,0xeb,0x68,0x11,0xba,0xd9,0xaf,0x99,0xe9,0x3f,0xfd,0x55,0x3b,0x65,0xf6,0xbb,
		 0x56,0x80,0x8c,0xc1,0xf4,0x7a,0xc4,0x50,0xd8,0x0c,0x54,0x24,0x7a,0x92,0x89,0x8a,
		 0x09,0x58,0x5d,0x5b,0x6d,0x34,0x74,0x62,0x0c,0xc1,0x5c,0xb5,0xe5,0x6e,0x08,0xc6,
		 0xc9,0xd6,0x16,0x3b,0x37,0xcf,0x63,0x19,0xb9,0xd4,0xe5,0xa7,0x92,0xa5,0x69,0x49},
		/*TST_input_dataSize*/
		512*sizeof(uint8_t),
		/*TST_output_signiture*/
		{0},
		/*TST_input_hash_SHA1*/
		{0x41,0x1f,0xd6,0xbc,0x3d,0x77,0xd0,0x5f,0xb0,0x71,0x00,0xf6,0x27,0xa7,0x55,0xf8,
		0x41,0x1f,0xd6,0xbc},
		/*TST_input_hash_SHA256*/
		{0x53,0xca,0xe2,0x11,0x6d,0x21,0x1e,0x0e,0x79,0x91,0xf7,0x57,0xbe,0x44,0x4b,0x4e,
		0x59,0xbd,0x78,0x8d,0xc5,0xfc,0xaf,0xf7,0xfb,0x46,0xaa,0x0a,0x4c,0xb1,0x7d,0x98},
		/*TST_input_hash_SHA512*/
		{0xd2,0xf5,0x71,0xe2,0x8d,0x37,0x5c,0xdd,0xe4,0x65,0xa7,0x24,0xc3,0xfa,0xc7,0x5a,
		0x41,0x7d,0xaa,0xed,0xcc,0x53,0x8a,0x31,0x36,0x00,0x51,0x1d,0xa5,0xa2,0x39,0xcc,
		0x4b,0x1d,0x93,0x8e,0x0a,0x50,0x95,0x10,0x7e,0x63,0x63,0x9e,0x2b,0xce,0x93,0xdf,
		0xca,0x33,0xc1,0x6b,0x8f,0xf0,0x4b,0x5c,0x11,0xaf,0x66,0x96,0x9d,0x43,0xf1,0x5e},
		}
};
#endif
