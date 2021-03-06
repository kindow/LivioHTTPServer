/**
 * This library is covered under the BSD 2-clause license below.
 * Software License Agreement (BSD License)
 *
 * ------------------------------------------------------------
 *
 * Copyright (c) 2011, Deusty, LLC
 * All rights reserved.
 *
 * Redistribution and use of this software in source and binary forms,
 * with or without modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above
 *   copyright notice, this list of conditions and the
 *   following disclaimer.
 *
 * * Neither the name of Deusty nor the names of its
 *   contributors may be used to endorse or promote products
 *   derived from this software without specific prior
 *   written permission of Deusty, LLC.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ------------------------------------------------------------
 *
 * This library was forked from it's original version, which can be found here: https://github.com/robbiehanson/CocoaHTTPServer
 * This library retains it's original license and is maintained by Livio.
 */

//
//  LivioHTTPServer.h
//  LivioHTTPServer
//
//  Created by Joel Fischer on 2/25/15.
//  Copyright (c) 2015 livio. All rights reserved.
//

#import <Cocoa/Cocoa.h>

//! Project version number for LivioHTTPServer-Mac.
FOUNDATION_EXPORT double LivioHTTPServer_MacVersionNumber;

//! Project version string for LivioHTTPServer-Mac.
FOUNDATION_EXPORT const unsigned char LivioHTTPServer_MacVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LivioHTTPServer_Mac/PublicHeader.h>

// MIME
#import <LivioHTTPServer-Mac/MultipartFormDataParser.h>
#import <LivioHTTPServer-Mac/MultipartMessageHeader.h>
#import <LivioHTTPServer-Mac/MultipartMessageHeaderField.h>

// Responses
#import <LivioHTTPServer-Mac/HTTPAsyncFileResponse.h>
#import <LivioHTTPServer-Mac/HTTPDataResponse.h>
#import <LivioHTTPServer-Mac/HTTPDynamicFileResponse.h>
#import <LivioHTTPServer-Mac/HTTPErrorResponse.h>
#import <LivioHTTPServer-Mac/HTTPFileResponse.h>
#import <LivioHTTPServer-Mac/HTTPRedirectResponse.h>

// Requests
#import <LivioHTTPServer-Mac/HTTPAuthenticationRequest.h>

// Server
#import <LivioHTTPServer-Mac/HTTPConnection.h>
#import <LivioHTTPServer-Mac/HTTPMessage.h>
#import <LivioHTTPServer-Mac/HTTPServer.h>
#import <LivioHTTPServer-Mac/WebSocket.h>
