set (Project "{{cookiecutter.Project_Name}}lib")
set (SOURCE ${CMAKE_SOURCE_DIR}/{{cookiecutter.Project_Name}}/hello.cpp)
set (HEADER ${CMAKE_SOURCE_DIR}/{{cookiecutter.Project_Name}}/hello.h)

add_library(${Project} SHARED ${SOURCE} )
target_include_directories(${Project} PUBLIC ${HEADER})

install(TARGETS ${Project} 
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}) 
   
   

