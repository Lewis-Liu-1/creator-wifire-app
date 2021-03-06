/***********************************************************************************************************************
 Copyright (c) 2016, Imagination Technologies Limited and/or its affiliated group companies.
 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
 following conditions are met:
     1. Redistributions of source code must retain the above copyright notice, this list of conditions and the
        following disclaimer.
     2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
        following disclaimer in the documentation and/or other materials provided with the distribution.
     3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote
        products derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE 
 USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
***********************************************************************************************************************/

#ifndef _SERVER_CERT_H
#define _SERVER_CERT_H

#ifdef __cplusplus
extern "C" {
#endif

// TODO - remove default cert?	
const unsigned char serverCert[] = {
//1024 Key 
//	0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x42, 0x45, 0x47, 0x49, 0x4E, 0x20, 0x52, 0x53, 0x41, 0x20, 0x50,
//	0x52, 0x49, 0x56, 0x41, 0x54, 0x45, 0x20, 0x4B, 0x45, 0x59, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0A,
//	0x4D, 0x49, 0x49, 0x43, 0x58, 0x41, 0x49, 0x42, 0x41, 0x41, 0x4B, 0x42, 0x67, 0x51, 0x44, 0x41,
//	0x67, 0x41, 0x4E, 0x6E, 0x61, 0x50, 0x2B, 0x77, 0x64, 0x50, 0x76, 0x76, 0x51, 0x54, 0x71, 0x77,
//	0x74, 0x45, 0x39, 0x75, 0x70, 0x32, 0x59, 0x62, 0x63, 0x55, 0x43, 0x39, 0x32, 0x57, 0x4F, 0x71,
//	0x64, 0x79, 0x55, 0x52, 0x65, 0x62, 0x6A, 0x6F, 0x65, 0x6A, 0x54, 0x73, 0x44, 0x6E, 0x62, 0x4A,
//	0x0A, 0x68, 0x4B, 0x6E, 0x70, 0x65, 0x70, 0x59, 0x72, 0x62, 0x77, 0x51, 0x6F, 0x45, 0x4A, 0x68,
//	0x54, 0x51, 0x66, 0x42, 0x66, 0x6A, 0x67, 0x6F, 0x5A, 0x79, 0x4C, 0x6C, 0x33, 0x63, 0x6A, 0x78,
//	0x7A, 0x68, 0x39, 0x76, 0x47, 0x61, 0x4B, 0x55, 0x73, 0x50, 0x69, 0x74, 0x59, 0x32, 0x39, 0x46,
//	0x52, 0x34, 0x34, 0x48, 0x48, 0x70, 0x47, 0x54, 0x48, 0x63, 0x67, 0x49, 0x35, 0x59, 0x6F, 0x4B,
//	0x76, 0x0A, 0x35, 0x47, 0x69, 0x4B, 0x70, 0x2F, 0x35, 0x45, 0x4B, 0x63, 0x42, 0x57, 0x51, 0x7A,
//	0x2B, 0x33, 0x30, 0x32, 0x34, 0x41, 0x30, 0x48, 0x39, 0x4E, 0x67, 0x6D, 0x47, 0x4B, 0x58, 0x67,
//	0x2B, 0x4C, 0x41, 0x46, 0x74, 0x49, 0x73, 0x4F, 0x65, 0x63, 0x74, 0x55, 0x37, 0x36, 0x65, 0x33,
//	0x59, 0x71, 0x39, 0x55, 0x75, 0x7A, 0x48, 0x51, 0x6C, 0x57, 0x59, 0x77, 0x49, 0x44, 0x41, 0x51,
//	0x41, 0x42, 0x0A, 0x41, 0x6F, 0x47, 0x41, 0x57, 0x4D, 0x70, 0x7A, 0x52, 0x33, 0x36, 0x5A, 0x2B,
//	0x62, 0x56, 0x73, 0x41, 0x34, 0x61, 0x74, 0x34, 0x4A, 0x57, 0x36, 0x30, 0x63, 0x70, 0x72, 0x41,
//	0x5A, 0x74, 0x79, 0x68, 0x6C, 0x39, 0x41, 0x5A, 0x6E, 0x2B, 0x41, 0x58, 0x4A, 0x67, 0x74, 0x6E,
//	0x79, 0x58, 0x48, 0x52, 0x56, 0x37, 0x43, 0x6B, 0x64, 0x38, 0x63, 0x56, 0x48, 0x4A, 0x54, 0x31,
//	0x41, 0x4C, 0x6F, 0x0A, 0x41, 0x75, 0x62, 0x73, 0x71, 0x2F, 0x4B, 0x4E, 0x51, 0x6A, 0x59, 0x4E,
//	0x47, 0x4B, 0x6D, 0x4B, 0x53, 0x72, 0x73, 0x70, 0x67, 0x51, 0x79, 0x59, 0x5A, 0x52, 0x58, 0x44,
//	0x53, 0x75, 0x4A, 0x2B, 0x30, 0x48, 0x34, 0x34, 0x6F, 0x4D, 0x4A, 0x47, 0x5A, 0x58, 0x57, 0x41,
//	0x70, 0x5A, 0x56, 0x53, 0x35, 0x2B, 0x4E, 0x6F, 0x43, 0x45, 0x65, 0x71, 0x67, 0x4E, 0x4C, 0x2F,
//	0x76, 0x41, 0x31, 0x58, 0x0A, 0x66, 0x39, 0x6E, 0x71, 0x41, 0x46, 0x4E, 0x64, 0x47, 0x59, 0x52,
//	0x32, 0x52, 0x67, 0x52, 0x51, 0x54, 0x33, 0x48, 0x68, 0x52, 0x39, 0x65, 0x78, 0x73, 0x49, 0x42,
//	0x36, 0x61, 0x5A, 0x49, 0x55, 0x6E, 0x5A, 0x6E, 0x47, 0x35, 0x6C, 0x32, 0x32, 0x66, 0x42, 0x58,
//	0x68, 0x67, 0x68, 0x45, 0x43, 0x51, 0x51, 0x44, 0x76, 0x45, 0x57, 0x56, 0x6F, 0x7A, 0x73, 0x74,
//	0x4A, 0x50, 0x4B, 0x43, 0x49, 0x0A, 0x4F, 0x61, 0x69, 0x6F, 0x4B, 0x4D, 0x78, 0x70, 0x36, 0x65,
//	0x61, 0x4E, 0x4F, 0x38, 0x63, 0x74, 0x65, 0x39, 0x39, 0x36, 0x47, 0x41, 0x31, 0x51, 0x61, 0x6D,
//	0x42, 0x56, 0x75, 0x59, 0x47, 0x32, 0x56, 0x48, 0x43, 0x74, 0x4A, 0x6B, 0x4A, 0x49, 0x37, 0x2B,
//	0x51, 0x50, 0x2F, 0x79, 0x64, 0x56, 0x41, 0x4B, 0x57, 0x32, 0x4A, 0x6A, 0x4F, 0x43, 0x56, 0x76,
//	0x59, 0x2B, 0x6F, 0x58, 0x69, 0x6E, 0x0A, 0x4C, 0x6D, 0x4C, 0x6E, 0x6C, 0x51, 0x76, 0x4C, 0x41,
//	0x6B, 0x45, 0x41, 0x7A, 0x69, 0x4A, 0x49, 0x52, 0x55, 0x74, 0x30, 0x62, 0x2B, 0x30, 0x4A, 0x30,
//	0x42, 0x62, 0x4C, 0x44, 0x59, 0x39, 0x79, 0x66, 0x2B, 0x6F, 0x54, 0x41, 0x71, 0x74, 0x36, 0x4E,
//	0x59, 0x7A, 0x58, 0x58, 0x34, 0x56, 0x6B, 0x4C, 0x44, 0x6A, 0x2F, 0x41, 0x4C, 0x55, 0x45, 0x43,
//	0x79, 0x39, 0x61, 0x6E, 0x71, 0x4D, 0x44, 0x0A, 0x68, 0x36, 0x51, 0x62, 0x72, 0x65, 0x6F, 0x37,
//	0x56, 0x55, 0x79, 0x59, 0x43, 0x56, 0x73, 0x7A, 0x73, 0x4A, 0x4D, 0x6F, 0x50, 0x42, 0x54, 0x55,
//	0x4A, 0x41, 0x31, 0x43, 0x4A, 0x63, 0x36, 0x38, 0x79, 0x51, 0x4A, 0x42, 0x41, 0x49, 0x42, 0x36,
//	0x42, 0x4E, 0x6D, 0x79, 0x61, 0x4B, 0x56, 0x50, 0x49, 0x36, 0x61, 0x52, 0x39, 0x67, 0x57, 0x4A,
//	0x42, 0x33, 0x48, 0x54, 0x39, 0x63, 0x62, 0x6F, 0x0A, 0x33, 0x54, 0x32, 0x67, 0x57, 0x4A, 0x55,
//	0x77, 0x33, 0x39, 0x62, 0x62, 0x6C, 0x44, 0x48, 0x39, 0x6F, 0x36, 0x76, 0x73, 0x37, 0x54, 0x44,
//	0x67, 0x59, 0x72, 0x62, 0x33, 0x31, 0x4D, 0x53, 0x55, 0x42, 0x76, 0x73, 0x7A, 0x67, 0x64, 0x72,
//	0x46, 0x35, 0x4F, 0x43, 0x6A, 0x41, 0x32, 0x72, 0x64, 0x4E, 0x41, 0x34, 0x45, 0x61, 0x37, 0x71,
//	0x77, 0x36, 0x73, 0x6B, 0x43, 0x51, 0x44, 0x69, 0x69, 0x0A, 0x5A, 0x71, 0x54, 0x54, 0x52, 0x46,
//	0x78, 0x30, 0x44, 0x64, 0x77, 0x6B, 0x52, 0x77, 0x6D, 0x6B, 0x76, 0x64, 0x71, 0x7A, 0x48, 0x79,
//	0x48, 0x2B, 0x70, 0x77, 0x63, 0x4C, 0x65, 0x53, 0x6A, 0x2F, 0x5A, 0x7A, 0x52, 0x58, 0x50, 0x49,
//	0x69, 0x66, 0x4D, 0x30, 0x73, 0x33, 0x61, 0x58, 0x68, 0x6F, 0x5A, 0x56, 0x48, 0x68, 0x48, 0x74,
//	0x47, 0x37, 0x70, 0x79, 0x32, 0x61, 0x61, 0x37, 0x4D, 0x32, 0x0A, 0x59, 0x59, 0x39, 0x44, 0x2F,
//	0x79, 0x76, 0x79, 0x74, 0x51, 0x35, 0x71, 0x72, 0x68, 0x2F, 0x68, 0x47, 0x7A, 0x45, 0x43, 0x51,
//	0x46, 0x65, 0x76, 0x61, 0x76, 0x49, 0x69, 0x4E, 0x55, 0x36, 0x75, 0x43, 0x49, 0x54, 0x6A, 0x67,
//	0x65, 0x4D, 0x6D, 0x4D, 0x58, 0x57, 0x4F, 0x66, 0x48, 0x70, 0x30, 0x56, 0x4E, 0x6A, 0x6C, 0x64,
//	0x4F, 0x48, 0x61, 0x66, 0x69, 0x73, 0x32, 0x37, 0x66, 0x49, 0x57, 0x0A, 0x53, 0x38, 0x33, 0x76,
//	0x54, 0x41, 0x6A, 0x79, 0x56, 0x37, 0x2B, 0x79, 0x6C, 0x45, 0x4F, 0x52, 0x66, 0x75, 0x6E, 0x65,
//	0x2F, 0x4E, 0x41, 0x48, 0x53, 0x62, 0x52, 0x6C, 0x65, 0x70, 0x66, 0x2F, 0x2F, 0x45, 0x5A, 0x6A,
//	0x69, 0x58, 0x38, 0x63, 0x2F, 0x4F, 0x41, 0x3D, 0x0A, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x45, 0x4E,
//	0x44, 0x20, 0x52, 0x53, 0x41, 0x20, 0x50, 0x52, 0x49, 0x56, 0x41, 0x54, 0x45, 0x20, 0x4B, 0x45,
//	0x59, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0A, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x42, 0x45, 0x47, 0x49,
//	0x4E, 0x20, 0x43, 0x45, 0x52, 0x54, 0x49, 0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2D, 0x2D, 0x2D,
//	0x2D, 0x2D, 0x0A, 0x4D, 0x49, 0x49, 0x42, 0x38, 0x54, 0x43, 0x43, 0x41, 0x56, 0x71, 0x67, 0x41,
//	0x77, 0x49, 0x42, 0x41, 0x67, 0x49, 0x4A, 0x41, 0x4E, 0x78, 0x6F, 0x53, 0x36, 0x2B, 0x43, 0x41,
//	0x72, 0x44, 0x68, 0x4D, 0x41, 0x30, 0x47, 0x43, 0x53, 0x71, 0x47, 0x53, 0x49, 0x62, 0x33, 0x44,
//	0x51, 0x45, 0x42, 0x42, 0x51, 0x55, 0x41, 0x4D, 0x42, 0x45, 0x78, 0x44, 0x7A, 0x41, 0x4E, 0x42,
//	0x67, 0x4E, 0x56, 0x0A, 0x42, 0x41, 0x4D, 0x54, 0x42, 0x6E, 0x64, 0x70, 0x5A, 0x6D, 0x6C, 0x79,
//	0x5A, 0x54, 0x41, 0x65, 0x46, 0x77, 0x30, 0x78, 0x4E, 0x6A, 0x41, 0x30, 0x4D, 0x54, 0x41, 0x79,
//	0x4D, 0x6A, 0x45, 0x35, 0x4D, 0x44, 0x4E, 0x61, 0x46, 0x77, 0x30, 0x30, 0x4D, 0x7A, 0x41, 0x34,
//	0x4D, 0x6A, 0x63, 0x79, 0x4D, 0x6A, 0x45, 0x35, 0x4D, 0x44, 0x4E, 0x61, 0x4D, 0x42, 0x45, 0x78,
//	0x44, 0x7A, 0x41, 0x4E, 0x0A, 0x42, 0x67, 0x4E, 0x56, 0x42, 0x41, 0x4D, 0x54, 0x42, 0x6E, 0x64,
//	0x70, 0x5A, 0x6D, 0x6C, 0x79, 0x5A, 0x54, 0x43, 0x42, 0x6E, 0x7A, 0x41, 0x4E, 0x42, 0x67, 0x6B,
//	0x71, 0x68, 0x6B, 0x69, 0x47, 0x39, 0x77, 0x30, 0x42, 0x41, 0x51, 0x45, 0x46, 0x41, 0x41, 0x4F,
//	0x42, 0x6A, 0x51, 0x41, 0x77, 0x67, 0x59, 0x6B, 0x43, 0x67, 0x59, 0x45, 0x41, 0x77, 0x49, 0x41,
//	0x44, 0x5A, 0x32, 0x6A, 0x2F, 0x0A, 0x73, 0x48, 0x54, 0x37, 0x37, 0x30, 0x45, 0x36, 0x73, 0x4C,
//	0x52, 0x50, 0x62, 0x71, 0x64, 0x6D, 0x47, 0x33, 0x46, 0x41, 0x76, 0x64, 0x6C, 0x6A, 0x71, 0x6E,
//	0x63, 0x6C, 0x45, 0x58, 0x6D, 0x34, 0x36, 0x48, 0x6F, 0x30, 0x37, 0x41, 0x35, 0x32, 0x79, 0x59,
//	0x53, 0x70, 0x36, 0x58, 0x71, 0x57, 0x4B, 0x32, 0x38, 0x45, 0x4B, 0x42, 0x43, 0x59, 0x55, 0x30,
//	0x48, 0x77, 0x58, 0x34, 0x34, 0x4B, 0x0A, 0x47, 0x63, 0x69, 0x35, 0x64, 0x33, 0x49, 0x38, 0x63,
//	0x34, 0x66, 0x62, 0x78, 0x6D, 0x69, 0x6C, 0x4C, 0x44, 0x34, 0x72, 0x57, 0x4E, 0x76, 0x52, 0x55,
//	0x65, 0x4F, 0x42, 0x78, 0x36, 0x52, 0x6B, 0x78, 0x33, 0x49, 0x43, 0x4F, 0x57, 0x4B, 0x43, 0x72,
//	0x2B, 0x52, 0x6F, 0x69, 0x71, 0x66, 0x2B, 0x52, 0x43, 0x6E, 0x41, 0x56, 0x6B, 0x4D, 0x2F, 0x74,
//	0x39, 0x4E, 0x75, 0x41, 0x4E, 0x42, 0x2F, 0x0A, 0x54, 0x59, 0x4A, 0x68, 0x69, 0x6C, 0x34, 0x50,
//	0x69, 0x77, 0x42, 0x62, 0x53, 0x4C, 0x44, 0x6E, 0x6E, 0x4C, 0x56, 0x4F, 0x2B, 0x6E, 0x74, 0x32,
//	0x4B, 0x76, 0x56, 0x4C, 0x73, 0x78, 0x30, 0x4A, 0x56, 0x6D, 0x4D, 0x43, 0x41, 0x77, 0x45, 0x41,
//	0x41, 0x61, 0x4E, 0x52, 0x4D, 0x45, 0x38, 0x77, 0x43, 0x77, 0x59, 0x44, 0x56, 0x52, 0x30, 0x50,
//	0x42, 0x41, 0x51, 0x44, 0x41, 0x67, 0x51, 0x77, 0x0A, 0x4D, 0x42, 0x4D, 0x47, 0x41, 0x31, 0x55,
//	0x64, 0x4A, 0x51, 0x51, 0x4D, 0x4D, 0x41, 0x6F, 0x47, 0x43, 0x43, 0x73, 0x47, 0x41, 0x51, 0x55,
//	0x46, 0x42, 0x77, 0x4D, 0x42, 0x4D, 0x43, 0x73, 0x47, 0x41, 0x31, 0x55, 0x64, 0x45, 0x51, 0x51,
//	0x6B, 0x4D, 0x43, 0x4B, 0x43, 0x43, 0x58, 0x64, 0x70, 0x5A, 0x6D, 0x6C, 0x79, 0x5A, 0x56, 0x39,
//	0x6C, 0x5A, 0x6F, 0x49, 0x4A, 0x64, 0x32, 0x6C, 0x6D, 0x0A, 0x61, 0x58, 0x4A, 0x6C, 0x58, 0x32,
//	0x56, 0x6A, 0x68, 0x77, 0x54, 0x41, 0x71, 0x41, 0x45, 0x5A, 0x68, 0x77, 0x54, 0x41, 0x71, 0x41,
//	0x45, 0x5A, 0x4D, 0x41, 0x30, 0x47, 0x43, 0x53, 0x71, 0x47, 0x53, 0x49, 0x62, 0x33, 0x44, 0x51,
//	0x45, 0x42, 0x42, 0x51, 0x55, 0x41, 0x41, 0x34, 0x47, 0x42, 0x41, 0x46, 0x57, 0x4A, 0x46, 0x41,
//	0x65, 0x64, 0x75, 0x4B, 0x4F, 0x70, 0x47, 0x32, 0x53, 0x76, 0x0A, 0x7A, 0x44, 0x64, 0x32, 0x36,
//	0x67, 0x66, 0x69, 0x44, 0x30, 0x4F, 0x62, 0x67, 0x76, 0x44, 0x6B, 0x50, 0x4C, 0x36, 0x62, 0x43,
//	0x38, 0x32, 0x61, 0x58, 0x47, 0x69, 0x69, 0x6E, 0x42, 0x6D, 0x46, 0x69, 0x49, 0x49, 0x32, 0x67,
//	0x38, 0x48, 0x6F, 0x6F, 0x37, 0x4B, 0x77, 0x71, 0x44, 0x51, 0x2B, 0x67, 0x58, 0x46, 0x50, 0x62,
//	0x35, 0x42, 0x56, 0x31, 0x47, 0x4A, 0x31, 0x66, 0x2B, 0x67, 0x6A, 0x0A, 0x37, 0x44, 0x6D, 0x2F,
//	0x6C, 0x4B, 0x4D, 0x54, 0x56, 0x51, 0x77, 0x6C, 0x4E, 0x71, 0x76, 0x4C, 0x2B, 0x4A, 0x65, 0x6A,
//	0x44, 0x5A, 0x62, 0x35, 0x50, 0x31, 0x6F, 0x66, 0x51, 0x41, 0x58, 0x4E, 0x2B, 0x41, 0x4A, 0x46,
//	0x4E, 0x6A, 0x2F, 0x52, 0x54, 0x2F, 0x32, 0x46, 0x49, 0x68, 0x71, 0x4E, 0x5A, 0x42, 0x4E, 0x35,
//	0x73, 0x6B, 0x46, 0x75, 0x35, 0x33, 0x41, 0x74, 0x44, 0x6F, 0x41, 0x36, 0x0A, 0x34, 0x48, 0x47,
//	0x50, 0x51, 0x53, 0x68, 0x73, 0x4E, 0x43, 0x68, 0x53, 0x4F, 0x54, 0x4B, 0x49, 0x54, 0x67, 0x71,
//	0x36, 0x4C, 0x68, 0x47, 0x6B, 0x38, 0x73, 0x79, 0x7A, 0x0A, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x45,
//	0x4E, 0x44, 0x20, 0x43, 0x45, 0x52, 0x54, 0x49, 0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2D, 0x2D,
//	0x2D, 0x2D, 0x2D, 0x0A, 0x0A 
//2048 Key 	
    0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x42, 0x45, 0x47, 0x49, 0x4E, 0x20, 0x52, 0x53, 0x41, 0x20, 0x50,
    0x52, 0x49, 0x56, 0x41, 0x54, 0x45, 0x20, 0x4B, 0x45, 0x59, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0A,
    0x4D, 0x49, 0x49, 0x45, 0x70, 0x51, 0x49, 0x42, 0x41, 0x41, 0x4B, 0x43, 0x41, 0x51, 0x45, 0x41,
    0x77, 0x6D, 0x6C, 0x35, 0x56, 0x62, 0x73, 0x72, 0x58, 0x49, 0x33, 0x47, 0x43, 0x62, 0x57, 0x6B,
    0x36, 0x6C, 0x78, 0x70, 0x61, 0x55, 0x4A, 0x47, 0x31, 0x4F, 0x4B, 0x63, 0x39, 0x73, 0x41, 0x77,
    0x45, 0x32, 0x58, 0x6F, 0x6C, 0x52, 0x72, 0x39, 0x4F, 0x7A, 0x49, 0x36, 0x4B, 0x76, 0x78, 0x54,
    0x0A, 0x35, 0x37, 0x69, 0x67, 0x35, 0x5A, 0x48, 0x4F, 0x6B, 0x50, 0x69, 0x36, 0x67, 0x70, 0x54,
    0x47, 0x6A, 0x75, 0x74, 0x67, 0x59, 0x30, 0x45, 0x33, 0x63, 0x33, 0x5A, 0x43, 0x52, 0x6A, 0x58,
    0x37, 0x51, 0x32, 0x36, 0x66, 0x4B, 0x35, 0x62, 0x6F, 0x6F, 0x56, 0x2B, 0x56, 0x78, 0x31, 0x69,
    0x6C, 0x68, 0x69, 0x78, 0x49, 0x51, 0x75, 0x56, 0x53, 0x35, 0x79, 0x6D, 0x2B, 0x72, 0x47, 0x75,
    0x4C, 0x0A, 0x44, 0x79, 0x4C, 0x53, 0x79, 0x49, 0x33, 0x65, 0x4C, 0x36, 0x63, 0x58, 0x4A, 0x66,
    0x30, 0x79, 0x31, 0x66, 0x4A, 0x58, 0x73, 0x36, 0x48, 0x73, 0x63, 0x5A, 0x67, 0x36, 0x76, 0x4B,
    0x6B, 0x39, 0x46, 0x35, 0x4D, 0x6F, 0x58, 0x6B, 0x4B, 0x54, 0x33, 0x35, 0x56, 0x2B, 0x7A, 0x55,
    0x6B, 0x4E, 0x52, 0x35, 0x41, 0x48, 0x74, 0x39, 0x62, 0x4E, 0x35, 0x32, 0x6E, 0x47, 0x73, 0x41,
    0x34, 0x44, 0x0A, 0x4F, 0x59, 0x43, 0x33, 0x53, 0x4E, 0x75, 0x58, 0x79, 0x58, 0x42, 0x74, 0x6C,
    0x66, 0x36, 0x54, 0x67, 0x61, 0x5A, 0x41, 0x52, 0x78, 0x77, 0x6C, 0x5A, 0x54, 0x61, 0x6A, 0x6B,
    0x61, 0x63, 0x74, 0x52, 0x61, 0x38, 0x65, 0x2B, 0x63, 0x4B, 0x62, 0x66, 0x31, 0x6C, 0x2F, 0x59,
    0x52, 0x6A, 0x79, 0x4F, 0x30, 0x53, 0x38, 0x43, 0x6C, 0x6D, 0x4C, 0x6B, 0x31, 0x36, 0x4D, 0x58,
    0x52, 0x57, 0x2B, 0x0A, 0x35, 0x30, 0x75, 0x37, 0x4D, 0x6B, 0x36, 0x2F, 0x6D, 0x71, 0x62, 0x33,
    0x4F, 0x78, 0x71, 0x46, 0x76, 0x4C, 0x6F, 0x45, 0x66, 0x76, 0x37, 0x76, 0x62, 0x52, 0x46, 0x75,
    0x6D, 0x45, 0x79, 0x35, 0x6F, 0x41, 0x33, 0x66, 0x39, 0x33, 0x6C, 0x4F, 0x36, 0x4C, 0x6D, 0x2F,
    0x50, 0x76, 0x46, 0x56, 0x2B, 0x5A, 0x36, 0x7A, 0x6C, 0x41, 0x6E, 0x52, 0x31, 0x4C, 0x57, 0x61,
    0x77, 0x69, 0x2F, 0x52, 0x0A, 0x4B, 0x37, 0x53, 0x7A, 0x70, 0x56, 0x52, 0x73, 0x70, 0x37, 0x4B,
    0x56, 0x6D, 0x6A, 0x71, 0x2F, 0x4C, 0x31, 0x5A, 0x59, 0x61, 0x4B, 0x76, 0x66, 0x34, 0x75, 0x64,
    0x30, 0x4B, 0x7A, 0x46, 0x51, 0x6C, 0x74, 0x63, 0x66, 0x49, 0x51, 0x49, 0x44, 0x41, 0x51, 0x41,
    0x42, 0x41, 0x6F, 0x49, 0x42, 0x41, 0x51, 0x43, 0x57, 0x57, 0x54, 0x46, 0x76, 0x76, 0x71, 0x63,
    0x6A, 0x46, 0x62, 0x56, 0x51, 0x0A, 0x37, 0x76, 0x77, 0x53, 0x44, 0x74, 0x4F, 0x71, 0x68, 0x6F,
    0x6E, 0x32, 0x75, 0x79, 0x59, 0x2B, 0x6F, 0x5A, 0x54, 0x4D, 0x65, 0x36, 0x52, 0x71, 0x49, 0x34,
    0x77, 0x78, 0x53, 0x6E, 0x2B, 0x33, 0x6E, 0x4A, 0x70, 0x61, 0x2B, 0x75, 0x72, 0x62, 0x66, 0x32,
    0x35, 0x72, 0x71, 0x52, 0x2B, 0x38, 0x4F, 0x73, 0x68, 0x76, 0x34, 0x4E, 0x49, 0x54, 0x45, 0x47,
    0x32, 0x4D, 0x79, 0x71, 0x6B, 0x6F, 0x0A, 0x57, 0x54, 0x6A, 0x76, 0x42, 0x6B, 0x37, 0x73, 0x53,
    0x2F, 0x47, 0x75, 0x55, 0x78, 0x69, 0x6E, 0x4B, 0x51, 0x51, 0x68, 0x68, 0x6E, 0x39, 0x2F, 0x31,
    0x49, 0x2F, 0x50, 0x6D, 0x2F, 0x59, 0x4D, 0x71, 0x38, 0x4C, 0x49, 0x4F, 0x74, 0x73, 0x65, 0x4A,
    0x4C, 0x44, 0x75, 0x30, 0x31, 0x37, 0x51, 0x6A, 0x30, 0x62, 0x51, 0x4E, 0x48, 0x48, 0x6B, 0x78,
    0x74, 0x58, 0x76, 0x5A, 0x35, 0x59, 0x4E, 0x0A, 0x4C, 0x79, 0x6A, 0x43, 0x34, 0x5A, 0x68, 0x33,
    0x68, 0x53, 0x2B, 0x4D, 0x32, 0x72, 0x56, 0x4D, 0x6C, 0x7A, 0x46, 0x41, 0x35, 0x62, 0x39, 0x43,
    0x53, 0x6B, 0x6E, 0x45, 0x71, 0x79, 0x78, 0x63, 0x31, 0x69, 0x64, 0x45, 0x66, 0x67, 0x31, 0x2B,
    0x52, 0x75, 0x6C, 0x50, 0x61, 0x6E, 0x7A, 0x48, 0x49, 0x7A, 0x43, 0x76, 0x47, 0x50, 0x65, 0x4B,
    0x57, 0x33, 0x68, 0x2F, 0x34, 0x4D, 0x31, 0x57, 0x0A, 0x55, 0x31, 0x77, 0x32, 0x33, 0x31, 0x42,
    0x79, 0x37, 0x42, 0x41, 0x4A, 0x45, 0x63, 0x51, 0x45, 0x52, 0x31, 0x79, 0x5A, 0x2B, 0x72, 0x44,
    0x77, 0x45, 0x77, 0x63, 0x42, 0x4D, 0x76, 0x61, 0x75, 0x49, 0x4C, 0x33, 0x6A, 0x46, 0x6B, 0x4D,
    0x63, 0x67, 0x33, 0x6F, 0x72, 0x71, 0x62, 0x6D, 0x35, 0x43, 0x4A, 0x39, 0x5A, 0x77, 0x30, 0x42,
    0x39, 0x51, 0x34, 0x64, 0x7A, 0x43, 0x45, 0x4C, 0x42, 0x0A, 0x50, 0x52, 0x47, 0x64, 0x41, 0x48,
    0x33, 0x6B, 0x48, 0x67, 0x72, 0x53, 0x50, 0x46, 0x43, 0x57, 0x6B, 0x2B, 0x70, 0x73, 0x4F, 0x41,
    0x6D, 0x76, 0x2B, 0x70, 0x34, 0x57, 0x7A, 0x41, 0x64, 0x45, 0x4D, 0x32, 0x38, 0x6A, 0x62, 0x4F,
    0x68, 0x77, 0x4A, 0x67, 0x59, 0x59, 0x31, 0x58, 0x2F, 0x59, 0x42, 0x49, 0x65, 0x38, 0x66, 0x48,
    0x57, 0x76, 0x4B, 0x55, 0x2F, 0x56, 0x33, 0x6C, 0x55, 0x6D, 0x0A, 0x31, 0x34, 0x44, 0x37, 0x68,
    0x55, 0x77, 0x52, 0x41, 0x6F, 0x47, 0x42, 0x41, 0x4F, 0x75, 0x67, 0x72, 0x6A, 0x2B, 0x72, 0x67,
    0x4E, 0x78, 0x30, 0x61, 0x4B, 0x30, 0x7A, 0x47, 0x2B, 0x72, 0x4F, 0x4A, 0x66, 0x47, 0x6E, 0x31,
    0x35, 0x79, 0x65, 0x2B, 0x47, 0x47, 0x2F, 0x63, 0x33, 0x32, 0x59, 0x38, 0x61, 0x6E, 0x38, 0x37,
    0x34, 0x4C, 0x49, 0x47, 0x79, 0x7A, 0x64, 0x56, 0x42, 0x50, 0x48, 0x0A, 0x75, 0x71, 0x31, 0x76,
    0x6C, 0x31, 0x6E, 0x77, 0x47, 0x6C, 0x70, 0x7A, 0x58, 0x50, 0x73, 0x31, 0x4D, 0x35, 0x4D, 0x73,
    0x32, 0x68, 0x52, 0x57, 0x79, 0x76, 0x39, 0x59, 0x4F, 0x32, 0x57, 0x6B, 0x50, 0x35, 0x6A, 0x35,
    0x68, 0x4D, 0x74, 0x56, 0x78, 0x49, 0x7A, 0x38, 0x34, 0x65, 0x4F, 0x41, 0x71, 0x35, 0x56, 0x6E,
    0x55, 0x4B, 0x48, 0x4C, 0x53, 0x7A, 0x65, 0x73, 0x79, 0x5A, 0x71, 0x65, 0x0A, 0x34, 0x69, 0x50,
    0x79, 0x36, 0x77, 0x64, 0x63, 0x33, 0x4D, 0x42, 0x35, 0x38, 0x49, 0x67, 0x4C, 0x57, 0x6C, 0x6B,
    0x43, 0x6F, 0x2F, 0x74, 0x70, 0x34, 0x45, 0x38, 0x54, 0x61, 0x7A, 0x4E, 0x75, 0x33, 0x56, 0x64,
    0x69, 0x52, 0x4C, 0x7A, 0x72, 0x33, 0x71, 0x6D, 0x6C, 0x67, 0x38, 0x49, 0x30, 0x7A, 0x44, 0x38,
    0x53, 0x50, 0x38, 0x64, 0x56, 0x41, 0x6F, 0x47, 0x42, 0x41, 0x4E, 0x4D, 0x34, 0x0A, 0x69, 0x59,
    0x4B, 0x49, 0x37, 0x38, 0x77, 0x34, 0x67, 0x49, 0x35, 0x66, 0x33, 0x48, 0x4B, 0x52, 0x6E, 0x6D,
    0x70, 0x4F, 0x2B, 0x32, 0x78, 0x64, 0x36, 0x35, 0x4B, 0x54, 0x51, 0x35, 0x57, 0x4B, 0x34, 0x47,
    0x49, 0x4E, 0x62, 0x55, 0x52, 0x64, 0x72, 0x51, 0x33, 0x63, 0x4C, 0x4B, 0x51, 0x53, 0x2B, 0x72,
    0x57, 0x42, 0x7A, 0x4D, 0x46, 0x69, 0x78, 0x6A, 0x31, 0x37, 0x30, 0x73, 0x75, 0x62, 0x0A, 0x42,
    0x4E, 0x73, 0x68, 0x57, 0x33, 0x33, 0x31, 0x37, 0x47, 0x4A, 0x58, 0x49, 0x39, 0x4B, 0x43, 0x30,
    0x34, 0x49, 0x4F, 0x34, 0x6C, 0x43, 0x5A, 0x6F, 0x31, 0x63, 0x38, 0x77, 0x4C, 0x68, 0x6F, 0x53,
    0x6A, 0x47, 0x37, 0x6B, 0x79, 0x69, 0x50, 0x73, 0x66, 0x75, 0x64, 0x4A, 0x4E, 0x69, 0x62, 0x73,
    0x56, 0x65, 0x38, 0x66, 0x58, 0x78, 0x73, 0x51, 0x42, 0x31, 0x69, 0x53, 0x35, 0x4E, 0x78, 0x0A,
    0x59, 0x6C, 0x4D, 0x79, 0x71, 0x43, 0x79, 0x33, 0x32, 0x34, 0x49, 0x69, 0x6F, 0x32, 0x74, 0x66,
    0x38, 0x46, 0x6D, 0x36, 0x6C, 0x31, 0x6F, 0x65, 0x6A, 0x4D, 0x61, 0x33, 0x77, 0x52, 0x4B, 0x74,
    0x6E, 0x79, 0x61, 0x62, 0x45, 0x6D, 0x43, 0x64, 0x41, 0x6F, 0x47, 0x42, 0x41, 0x4E, 0x76, 0x38,
    0x36, 0x5A, 0x4B, 0x53, 0x53, 0x62, 0x34, 0x4A, 0x68, 0x51, 0x31, 0x6E, 0x73, 0x55, 0x48, 0x59,
    0x0A, 0x38, 0x2F, 0x34, 0x5A, 0x69, 0x53, 0x6B, 0x32, 0x46, 0x6F, 0x6F, 0x55, 0x56, 0x2F, 0x78,
    0x45, 0x52, 0x69, 0x52, 0x42, 0x2F, 0x55, 0x2F, 0x71, 0x43, 0x63, 0x30, 0x71, 0x57, 0x75, 0x77,
    0x59, 0x78, 0x6F, 0x5A, 0x55, 0x73, 0x45, 0x63, 0x4D, 0x37, 0x31, 0x33, 0x52, 0x5A, 0x56, 0x63,
    0x34, 0x52, 0x59, 0x32, 0x38, 0x43, 0x32, 0x4E, 0x2F, 0x34, 0x51, 0x6A, 0x6A, 0x56, 0x4A, 0x6C,
    0x42, 0x0A, 0x37, 0x77, 0x71, 0x67, 0x73, 0x30, 0x57, 0x77, 0x4C, 0x74, 0x43, 0x2B, 0x37, 0x52,
    0x73, 0x64, 0x72, 0x35, 0x54, 0x4F, 0x6E, 0x36, 0x35, 0x66, 0x41, 0x6A, 0x76, 0x5A, 0x75, 0x32,
    0x50, 0x37, 0x77, 0x51, 0x42, 0x31, 0x4E, 0x4D, 0x39, 0x72, 0x2B, 0x4D, 0x4A, 0x50, 0x56, 0x71,
    0x31, 0x39, 0x67, 0x2F, 0x32, 0x6B, 0x68, 0x48, 0x73, 0x66, 0x54, 0x34, 0x67, 0x6B, 0x68, 0x69,
    0x71, 0x2F, 0x0A, 0x38, 0x44, 0x45, 0x38, 0x6B, 0x78, 0x61, 0x62, 0x56, 0x51, 0x69, 0x6F, 0x65,
    0x6B, 0x70, 0x67, 0x52, 0x75, 0x7A, 0x2F, 0x32, 0x63, 0x48, 0x39, 0x41, 0x6F, 0x47, 0x41, 0x65,
    0x50, 0x33, 0x6F, 0x33, 0x79, 0x70, 0x62, 0x32, 0x71, 0x72, 0x2F, 0x45, 0x51, 0x39, 0x65, 0x63,
    0x77, 0x35, 0x78, 0x4A, 0x55, 0x70, 0x72, 0x41, 0x57, 0x39, 0x6E, 0x63, 0x77, 0x59, 0x43, 0x62,
    0x39, 0x59, 0x6D, 0x0A, 0x70, 0x47, 0x51, 0x32, 0x6C, 0x44, 0x50, 0x6F, 0x33, 0x6F, 0x69, 0x68,
    0x31, 0x62, 0x61, 0x39, 0x67, 0x46, 0x32, 0x44, 0x45, 0x62, 0x2F, 0x6E, 0x2B, 0x4F, 0x35, 0x47,
    0x47, 0x4C, 0x57, 0x4B, 0x2B, 0x59, 0x39, 0x4A, 0x48, 0x6F, 0x56, 0x52, 0x7A, 0x42, 0x39, 0x49,
    0x65, 0x4E, 0x7A, 0x53, 0x46, 0x61, 0x30, 0x36, 0x2F, 0x4A, 0x71, 0x56, 0x6B, 0x33, 0x4A, 0x4D,
    0x6E, 0x78, 0x57, 0x32, 0x0A, 0x63, 0x6E, 0x69, 0x56, 0x57, 0x6D, 0x57, 0x39, 0x75, 0x58, 0x6B,
    0x52, 0x30, 0x7A, 0x61, 0x55, 0x52, 0x73, 0x4C, 0x46, 0x53, 0x78, 0x47, 0x6A, 0x52, 0x48, 0x47,
    0x37, 0x41, 0x78, 0x47, 0x76, 0x46, 0x69, 0x4E, 0x74, 0x62, 0x48, 0x68, 0x42, 0x4F, 0x48, 0x46,
    0x70, 0x46, 0x53, 0x66, 0x57, 0x77, 0x54, 0x39, 0x2B, 0x56, 0x58, 0x51, 0x73, 0x68, 0x65, 0x52,
    0x61, 0x70, 0x37, 0x31, 0x6D, 0x0A, 0x37, 0x6A, 0x46, 0x6B, 0x50, 0x49, 0x30, 0x43, 0x67, 0x59,
    0x45, 0x41, 0x33, 0x31, 0x46, 0x6B, 0x58, 0x67, 0x65, 0x5A, 0x6F, 0x39, 0x77, 0x56, 0x4F, 0x54,
    0x32, 0x5A, 0x39, 0x66, 0x39, 0x45, 0x46, 0x6B, 0x67, 0x58, 0x2F, 0x66, 0x78, 0x73, 0x52, 0x77,
    0x36, 0x65, 0x51, 0x52, 0x79, 0x44, 0x5A, 0x38, 0x45, 0x4A, 0x68, 0x66, 0x52, 0x6D, 0x31, 0x30,
    0x5A, 0x55, 0x4A, 0x4F, 0x41, 0x6D, 0x0A, 0x33, 0x35, 0x47, 0x63, 0x31, 0x51, 0x35, 0x79, 0x47,
    0x62, 0x6B, 0x54, 0x75, 0x54, 0x49, 0x6E, 0x6A, 0x50, 0x44, 0x68, 0x35, 0x6D, 0x7A, 0x6F, 0x39,
    0x63, 0x36, 0x73, 0x4C, 0x39, 0x2F, 0x73, 0x47, 0x6E, 0x37, 0x63, 0x6B, 0x79, 0x6D, 0x56, 0x49,
    0x44, 0x6E, 0x6D, 0x6D, 0x38, 0x4A, 0x57, 0x56, 0x79, 0x79, 0x56, 0x32, 0x6F, 0x32, 0x73, 0x50,
    0x46, 0x4D, 0x56, 0x46, 0x53, 0x67, 0x2F, 0x0A, 0x6A, 0x67, 0x67, 0x31, 0x6B, 0x67, 0x78, 0x4D,
    0x4B, 0x73, 0x6C, 0x69, 0x67, 0x54, 0x6E, 0x66, 0x47, 0x4B, 0x4C, 0x50, 0x67, 0x42, 0x57, 0x36,
    0x6A, 0x75, 0x6F, 0x2B, 0x4C, 0x7A, 0x32, 0x74, 0x36, 0x6B, 0x45, 0x6D, 0x59, 0x62, 0x6F, 0x56,
    0x32, 0x33, 0x55, 0x4E, 0x61, 0x6B, 0x4F, 0x57, 0x31, 0x71, 0x61, 0x4C, 0x70, 0x37, 0x55, 0x3D,
    0x0A, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x45, 0x4E, 0x44, 0x20, 0x52, 0x53, 0x41, 0x20, 0x50, 0x52,
    0x49, 0x56, 0x41, 0x54, 0x45, 0x20, 0x4B, 0x45, 0x59, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0A, 0x2D,
    0x2D, 0x2D, 0x2D, 0x2D, 0x42, 0x45, 0x47, 0x49, 0x4E, 0x20, 0x43, 0x45, 0x52, 0x54, 0x49, 0x46,
    0x49, 0x43, 0x41, 0x54, 0x45, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0A, 0x4D, 0x49, 0x49, 0x43, 0x39,
    0x6A, 0x43, 0x43, 0x41, 0x64, 0x36, 0x67, 0x41, 0x77, 0x49, 0x42, 0x41, 0x67, 0x49, 0x4A, 0x41,
    0x4B, 0x36, 0x33, 0x50, 0x62, 0x6D, 0x4A, 0x61, 0x58, 0x69, 0x6F, 0x4D, 0x41, 0x30, 0x47, 0x43,
    0x53, 0x71, 0x47, 0x53, 0x49, 0x62, 0x33, 0x44, 0x51, 0x45, 0x42, 0x42, 0x51, 0x55, 0x41, 0x4D,
    0x42, 0x45, 0x78, 0x44, 0x7A, 0x41, 0x4E, 0x42, 0x67, 0x4E, 0x56, 0x0A, 0x42, 0x41, 0x4D, 0x54,
    0x42, 0x6E, 0x64, 0x70, 0x5A, 0x6D, 0x6C, 0x79, 0x5A, 0x54, 0x41, 0x65, 0x46, 0x77, 0x30, 0x78,
    0x4E, 0x6A, 0x41, 0x7A, 0x4D, 0x7A, 0x41, 0x78, 0x4F, 0x54, 0x55, 0x79, 0x4D, 0x6A, 0x42, 0x61,
    0x46, 0x77, 0x30, 0x30, 0x4D, 0x7A, 0x41, 0x34, 0x4D, 0x54, 0x59, 0x78, 0x4F, 0x54, 0x55, 0x79,
    0x4D, 0x6A, 0x42, 0x61, 0x4D, 0x42, 0x45, 0x78, 0x44, 0x7A, 0x41, 0x4E, 0x0A, 0x42, 0x67, 0x4E,
    0x56, 0x42, 0x41, 0x4D, 0x54, 0x42, 0x6E, 0x64, 0x70, 0x5A, 0x6D, 0x6C, 0x79, 0x5A, 0x54, 0x43,
    0x43, 0x41, 0x53, 0x49, 0x77, 0x44, 0x51, 0x59, 0x4A, 0x4B, 0x6F, 0x5A, 0x49, 0x68, 0x76, 0x63,
    0x4E, 0x41, 0x51, 0x45, 0x42, 0x42, 0x51, 0x41, 0x44, 0x67, 0x67, 0x45, 0x50, 0x41, 0x44, 0x43,
    0x43, 0x41, 0x51, 0x6F, 0x43, 0x67, 0x67, 0x45, 0x42, 0x41, 0x4D, 0x4A, 0x70, 0x0A, 0x65, 0x56,
    0x57, 0x37, 0x4B, 0x31, 0x79, 0x4E, 0x78, 0x67, 0x6D, 0x31, 0x70, 0x4F, 0x70, 0x63, 0x61, 0x57,
    0x6C, 0x43, 0x52, 0x74, 0x54, 0x69, 0x6E, 0x50, 0x62, 0x41, 0x4D, 0x42, 0x4E, 0x6C, 0x36, 0x4A,
    0x55, 0x61, 0x2F, 0x54, 0x73, 0x79, 0x4F, 0x69, 0x72, 0x38, 0x55, 0x2B, 0x65, 0x34, 0x6F, 0x4F,
    0x57, 0x52, 0x7A, 0x70, 0x44, 0x34, 0x75, 0x6F, 0x4B, 0x55, 0x78, 0x6F, 0x37, 0x72, 0x0A, 0x59,
    0x47, 0x4E, 0x42, 0x4E, 0x33, 0x4E, 0x32, 0x51, 0x6B, 0x59, 0x31, 0x2B, 0x30, 0x4E, 0x75, 0x6E,
    0x79, 0x75, 0x57, 0x36, 0x4B, 0x46, 0x66, 0x6C, 0x63, 0x64, 0x59, 0x70, 0x59, 0x59, 0x73, 0x53,
    0x45, 0x4C, 0x6C, 0x55, 0x75, 0x63, 0x70, 0x76, 0x71, 0x78, 0x72, 0x69, 0x77, 0x38, 0x69, 0x30,
    0x73, 0x69, 0x4E, 0x33, 0x69, 0x2B, 0x6E, 0x46, 0x79, 0x58, 0x39, 0x4D, 0x74, 0x58, 0x79, 0x0A,
    0x56, 0x37, 0x4F, 0x68, 0x37, 0x48, 0x47, 0x59, 0x4F, 0x72, 0x79, 0x70, 0x50, 0x52, 0x65, 0x54,
    0x4B, 0x46, 0x35, 0x43, 0x6B, 0x39, 0x2B, 0x56, 0x66, 0x73, 0x31, 0x4A, 0x44, 0x55, 0x65, 0x51,
    0x42, 0x37, 0x66, 0x57, 0x7A, 0x65, 0x64, 0x70, 0x78, 0x72, 0x41, 0x4F, 0x41, 0x7A, 0x6D, 0x41,
    0x74, 0x30, 0x6A, 0x62, 0x6C, 0x38, 0x6C, 0x77, 0x62, 0x5A, 0x58, 0x2B, 0x6B, 0x34, 0x47, 0x6D,
    0x0A, 0x51, 0x45, 0x63, 0x63, 0x4A, 0x57, 0x55, 0x32, 0x6F, 0x35, 0x47, 0x6E, 0x4C, 0x55, 0x57,
    0x76, 0x48, 0x76, 0x6E, 0x43, 0x6D, 0x33, 0x39, 0x5A, 0x66, 0x32, 0x45, 0x59, 0x38, 0x6A, 0x74,
    0x45, 0x76, 0x41, 0x70, 0x5A, 0x69, 0x35, 0x4E, 0x65, 0x6A, 0x46, 0x30, 0x56, 0x76, 0x75, 0x64,
    0x4C, 0x75, 0x7A, 0x4A, 0x4F, 0x76, 0x35, 0x71, 0x6D, 0x39, 0x7A, 0x73, 0x61, 0x68, 0x62, 0x79,
    0x36, 0x0A, 0x42, 0x48, 0x37, 0x2B, 0x37, 0x32, 0x30, 0x52, 0x62, 0x70, 0x68, 0x4D, 0x75, 0x61,
    0x41, 0x4E, 0x33, 0x2F, 0x64, 0x35, 0x54, 0x75, 0x69, 0x35, 0x76, 0x7A, 0x37, 0x78, 0x56, 0x66,
    0x6D, 0x65, 0x73, 0x35, 0x51, 0x4A, 0x30, 0x64, 0x53, 0x31, 0x6D, 0x73, 0x49, 0x76, 0x30, 0x53,
    0x75, 0x30, 0x73, 0x36, 0x56, 0x55, 0x62, 0x4B, 0x65, 0x79, 0x6C, 0x5A, 0x6F, 0x36, 0x76, 0x79,
    0x39, 0x57, 0x0A, 0x57, 0x47, 0x69, 0x72, 0x33, 0x2B, 0x4C, 0x6E, 0x64, 0x43, 0x73, 0x78, 0x55,
    0x4A, 0x62, 0x58, 0x48, 0x79, 0x45, 0x43, 0x41, 0x77, 0x45, 0x41, 0x41, 0x61, 0x4E, 0x52, 0x4D,
    0x45, 0x38, 0x77, 0x43, 0x77, 0x59, 0x44, 0x56, 0x52, 0x30, 0x50, 0x42, 0x41, 0x51, 0x44, 0x41,
    0x67, 0x51, 0x77, 0x4D, 0x42, 0x4D, 0x47, 0x41, 0x31, 0x55, 0x64, 0x4A, 0x51, 0x51, 0x4D, 0x4D,
    0x41, 0x6F, 0x47, 0x0A, 0x43, 0x43, 0x73, 0x47, 0x41, 0x51, 0x55, 0x46, 0x42, 0x77, 0x4D, 0x42,
    0x4D, 0x43, 0x73, 0x47, 0x41, 0x31, 0x55, 0x64, 0x45, 0x51, 0x51, 0x6B, 0x4D, 0x43, 0x4B, 0x43,
    0x43, 0x58, 0x64, 0x70, 0x5A, 0x6D, 0x6C, 0x79, 0x5A, 0x56, 0x39, 0x6C, 0x5A, 0x6F, 0x49, 0x4A,
    0x64, 0x32, 0x6C, 0x6D, 0x61, 0x58, 0x4A, 0x6C, 0x58, 0x32, 0x56, 0x6A, 0x68, 0x77, 0x54, 0x41,
    0x71, 0x41, 0x45, 0x5A, 0x0A, 0x68, 0x77, 0x54, 0x41, 0x71, 0x41, 0x45, 0x5A, 0x4D, 0x41, 0x30,
    0x47, 0x43, 0x53, 0x71, 0x47, 0x53, 0x49, 0x62, 0x33, 0x44, 0x51, 0x45, 0x42, 0x42, 0x51, 0x55,
    0x41, 0x41, 0x34, 0x49, 0x42, 0x41, 0x51, 0x42, 0x54, 0x6E, 0x61, 0x53, 0x4B, 0x35, 0x76, 0x45,
    0x32, 0x34, 0x4D, 0x4B, 0x42, 0x55, 0x49, 0x45, 0x77, 0x38, 0x31, 0x33, 0x56, 0x71, 0x45, 0x53,
    0x6C, 0x57, 0x76, 0x64, 0x71, 0x0A, 0x57, 0x37, 0x4E, 0x2F, 0x4F, 0x30, 0x45, 0x56, 0x43, 0x31,
    0x70, 0x72, 0x58, 0x44, 0x75, 0x70, 0x67, 0x32, 0x39, 0x57, 0x71, 0x4D, 0x41, 0x39, 0x30, 0x58,
    0x55, 0x69, 0x57, 0x72, 0x67, 0x58, 0x79, 0x57, 0x54, 0x78, 0x74, 0x74, 0x6C, 0x4B, 0x4F, 0x31,
    0x41, 0x52, 0x34, 0x4E, 0x42, 0x78, 0x59, 0x37, 0x46, 0x78, 0x4E, 0x47, 0x75, 0x52, 0x6B, 0x35,
    0x64, 0x51, 0x4E, 0x63, 0x4B, 0x5A, 0x0A, 0x34, 0x74, 0x59, 0x36, 0x4E, 0x6B, 0x75, 0x6B, 0x63,
    0x4B, 0x2F, 0x6A, 0x41, 0x6A, 0x4B, 0x57, 0x78, 0x34, 0x75, 0x30, 0x33, 0x52, 0x4B, 0x6A, 0x42,
    0x62, 0x4F, 0x2B, 0x63, 0x62, 0x58, 0x41, 0x59, 0x70, 0x59, 0x55, 0x64, 0x4C, 0x4C, 0x53, 0x30,
    0x66, 0x65, 0x46, 0x43, 0x44, 0x4C, 0x44, 0x55, 0x48, 0x66, 0x52, 0x48, 0x76, 0x76, 0x68, 0x6C,
    0x6C, 0x2F, 0x34, 0x4E, 0x68, 0x65, 0x46, 0x0A, 0x37, 0x35, 0x49, 0x41, 0x32, 0x67, 0x76, 0x51,
    0x56, 0x7A, 0x6D, 0x39, 0x73, 0x74, 0x37, 0x5A, 0x61, 0x4C, 0x66, 0x4A, 0x47, 0x69, 0x56, 0x72,
    0x73, 0x6A, 0x6F, 0x61, 0x4B, 0x71, 0x4E, 0x6A, 0x63, 0x71, 0x50, 0x45, 0x38, 0x50, 0x4A, 0x42,
    0x35, 0x68, 0x53, 0x48, 0x51, 0x6D, 0x6B, 0x37, 0x2B, 0x70, 0x45, 0x4D, 0x54, 0x65, 0x6B, 0x6B,
    0x2B, 0x67, 0x45, 0x4B, 0x61, 0x53, 0x41, 0x63, 0x0A, 0x4E, 0x2F, 0x52, 0x46, 0x73, 0x47, 0x4D,
    0x62, 0x45, 0x67, 0x61, 0x39, 0x61, 0x34, 0x45, 0x4B, 0x62, 0x42, 0x2B, 0x50, 0x69, 0x35, 0x39,
    0x76, 0x41, 0x6F, 0x44, 0x49, 0x4E, 0x4E, 0x51, 0x41, 0x55, 0x47, 0x66, 0x58, 0x73, 0x56, 0x45,
    0x58, 0x46, 0x37, 0x6D, 0x58, 0x7A, 0x47, 0x4F, 0x4E, 0x48, 0x31, 0x2B, 0x62, 0x50, 0x41, 0x61,
    0x37, 0x55, 0x66, 0x67, 0x62, 0x72, 0x59, 0x4C, 0x66, 0x0A, 0x4A, 0x75, 0x32, 0x37, 0x56, 0x49,
    0x50, 0x57, 0x6F, 0x31, 0x37, 0x4C, 0x46, 0x6B, 0x52, 0x6F, 0x53, 0x67, 0x76, 0x45, 0x53, 0x43,
    0x78, 0x56, 0x38, 0x76, 0x73, 0x74, 0x64, 0x74, 0x66, 0x31, 0x38, 0x52, 0x7A, 0x32, 0x4E, 0x32,
    0x48, 0x67, 0x53, 0x6A, 0x6F, 0x52, 0x46, 0x31, 0x59, 0x6A, 0x58, 0x6D, 0x77, 0x55, 0x78, 0x4A,
    0x4D, 0x53, 0x0A, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x45, 0x4E, 0x44, 0x20, 0x43, 0x45, 0x52, 0x54,
    0x49, 0x46, 0x49, 0x43, 0x41, 0x54, 0x45, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0A, 0x0A
};


#ifdef __cplusplus
}
#endif

#endif /* _SERVER_CERT_H */
