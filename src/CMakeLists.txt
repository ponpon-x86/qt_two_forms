file(GLOB_RECURSE SOURCES
    *.cpp
    ${PROJECT_SOURCE_DIR}/include/*.h
)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(qt_two_forms
        MANUAL_FINALIZATION
        ${SOURCES}
    )
else()
    if(ANDROID)
        add_library(qt_two_forms SHARED
            ${SOURCES}
        )
    else()
        add_executable(qt_two_forms
            ${SOURCES}
        )
    endif()
endif()

target_link_libraries(qt_two_forms PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_include_directories(qt_two_forms PRIVATE ${PROJECT_SOURCE_DIR}/include)

set_target_properties(qt_two_forms PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS qt_two_forms
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(qt_two_forms)
endif()

