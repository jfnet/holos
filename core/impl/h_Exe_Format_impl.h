#ifndef h_Exe_Format_impl_included
#define h_Exe_Format_impl_included
#ifdef h_Exe_included
//----------------------------------------------------------------------

h_Format::h_Format()
  {
  }

//----------

h_Format::~h_Format()
  {
  }

//----------------------------------------

h_Descriptor* h_Format::getDescriptor(void)
  {
    return &H_DESCRIPTOR;
  }

//----------

h_Instance* h_Format::createInstance(h_Host* a_Host, h_Descriptor* a_Descriptor)
  {
    return new H_INSTANCE(a_Host,a_Descriptor);
  }

//----------------------------------------

int h_Format::entrypoint(void* a_Ptr)
  {

    h_Host* host = new h_Host();
    h_Descriptor* descriptor = getDescriptor();
    h_Instance* instance = createInstance(host,descriptor);
    #ifndef H_NOGUI
    if (descriptor->m_Flags & df_HasEditor)
    {
      h_Window* win = (h_Window*)instance->do_OpenEditor(a_Ptr);
      win->eventLoop();
      //instance->eventLoop();
      instance->do_CloseEditor();
    }
    #endif
    delete instance;
    delete host;
    return 0;
  }

//----------------------------------------------------------------------
#endif
#endif
