/*
  Copyright (c) 2010 Tor-Helge Skei, Lubomir I. Ivanov et al

  This file is part of the Holos Library.
  http://holos.googlecode.com

  the Holos Library is free software: you can redistribute it and/or modify
  it under the terms of the Holos Library License, either version 1.0
  of the License, or (at your option) any later version.

  the Holos Library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See LICENSE_HOLOS for more details.

  You should have received a copy of the Holos Library License
  If not, see <http://holos.googlecode.com/>.
*/
//----------------------------------------------------------------------
#ifndef h_Painter_included
#define h_Painter_included
//----------------------------------------------------------------------

class h_PaintSource
{
  public:
    virtual HDC getDC(void) { return 0; }
};

//class h_PaintTarget
//{
//};

//----------------------------------------------------------------------

//class h_Painter_Base
//{
//  public:
//    h_Painter_Base()
//      {
//      }
//    virtual ~h_Painter_Base()
//      {
//      }
//};

//----------------------------------------------------------------------

#ifdef H_WIN32
  #include "gui/impl/h_Painter_Win32.h"
#endif

#ifdef H_LINUX
  #include "gui/impl/h_Painter_Linux.h"
#endif

//----------------------------------------------------------------------

//class h_Painter : public h_Painter_Impl
//{
//  public:
//    h_Painter()
//    : h_Painter_Impl()
//      {
//      }
//    virtual ~h_Painter()
//      {
//      }
//};

//----------------------------------------------------------------------
#endif

