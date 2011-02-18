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
#ifndef holos_h_included
#define holos_h_included
//----------------------------------------------------------------------

#include "h/h_Defines.h"
#include "h/h_Debug.h"
#include "h/h_Core.h"

// platform

#ifdef H_LINUX
  //#include "h/h_Linux.h"
  #include "h/h_Platform_Linux.h"
#endif

#ifdef H_WIN32
  //#include "h/h_Win32.h"
  #include "h/h_Platform_Win32.h"
#endif

#include "h/h_Host.h"
#include "h/h_Instance.h"
//#include "h/h_Format.h"
#include "h/h_Parameter.h"
#include "h/h_Descriptor.h"

// host, instance, format

#ifdef H_EXE
  //#include "h/h_Exe.h"
  #include "h/h_Host_Exe.h"
  #include "h/h_Instance_Exe.h"
  #include "h/h_Format_Exe.h"
#endif

#ifdef H_LADSPA
  //#include "h/h_Ladspa.h"
  #include "h/h_Host_Ladspa.h"
  #include "h/h_Instance_Ladspa.h"
  #include "h/h_Format_Ladspa.h"
#endif

#ifdef H_VST
  //#include "h/h_Vst.h"
  #include "h/h_Host_Vst.h"
  #include "h/h_Instance_Vst.h"
  #include "h/h_Format_Vst.h"
#endif

#ifndef H_NOGUI
  #include "h/h_Editor.h"
#endif

//#include "h/h_Main.h"

//----------------------------------------------------------------------
#endif
