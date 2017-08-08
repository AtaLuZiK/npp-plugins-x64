cmake_minimum_required(VERSION 3.7)
project(NppPlugins)

include(CheckSymbolExists)

set(CompilerFlags
  CMAKE_CXX_FLAGS
  CMAKE_CXX_FLAGS_DEBUG
  CMAKE_CXX_FLAGS_RELEASE
  CMAKE_C_FLAGS
  CMAKE_C_FLAGS_DEBUG
  CMAKE_C_FLAGS_RELEASE)
foreach(CompilerFlag ${CompilerFlags})
  string(REPLACE "/MD" "/MT" ${CompilerFlag} "${${CompilerFlag}}")
endforeach()

CHECK_SYMBOL_EXISTS(GetWindowLongPtr windows.h HAS_GET_WINDOW_LONG_PTR)
CHECK_SYMBOL_EXISTS(SetWindowLongPtr windows.h HAS_SET_WINDOW_LONG_PTR)
CHECK_SYMBOL_EXISTS(GWLP_USERDATA windows.h HAS_GWLP_USERDATA)
CHECK_SYMBOL_EXISTS(GWLP_WNDPROC windows.h HAS_GWLP_WNDPROC)
CHECK_SYMBOL_EXISTS(GWLP_USERDATA windows.h HAS_GWLP_USERDATA)

configure_file(definitions.h.in definitions.h)

add_subdirectory(NppLightExplorer)