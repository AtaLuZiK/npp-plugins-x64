cmake_minimum_required(VERSION 3.7)
project(NppLightExplorer)

set(WTL_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/wtl90)

set(NPPLIGHTEXPLORER_SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/Notepad_plus_msgs.h
  ${CMAKE_CURRENT_SOURCE_DIR}/NppLightExplorer.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/PluginInterface.h
  ${CMAKE_CURRENT_SOURCE_DIR}/Scintilla.h
  ${CMAKE_CURRENT_SOURCE_DIR}/stdafx.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/stdafx.h
  ${CMAKE_CURRENT_SOURCE_DIR}/SysMsg.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/SysMsg.h
  ${CMAKE_CURRENT_SOURCE_DIR}/TreeCtrl.h
  ${CMAKE_CURRENT_SOURCE_DIR}/utils.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/utils.h
  ${CMAKE_CURRENT_SOURCE_DIR}/WtlFileTreeCtrl.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/WtlFileTreeCtrl.H
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/Docking.h
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/DockingDlgInterface.h
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/dockingResource.h
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/lightExplorerDlg.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/lightExplorer.rc
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/lightExplorerDlg.h
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/lightExplorerDlg.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/resource.h
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/StaticDialog.h
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/StaticDialog.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature/Window.h
  ${CMAKE_CURRENT_SOURCE_DIR}/HelpDlg/HelpDialog.h
  ${CMAKE_CURRENT_SOURCE_DIR}/HelpDlg/HelpDialog.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/HelpDlg/URLCtrl.h
  ${CMAKE_CURRENT_SOURCE_DIR}/HelpDlg/URLCtrl.cpp
)

add_library(NppLightExplorer SHARED
  ${NPPLIGHTEXPLORER_SOURCES}
)
target_compile_definitions(NppLightExplorer
  PRIVATE UNICODE
  PRIVATE _UNICODE
)
target_include_directories(NppLightExplorer
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/DockingFeature
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/HelpDlg
  PRIVATE ${WTL_SOURCE_DIR}
  PRIVATE ${CMAKE_BINARY_DIR}
)
target_link_libraries(NppLightExplorer
  Mpr
)
