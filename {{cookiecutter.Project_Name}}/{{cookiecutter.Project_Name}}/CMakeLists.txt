
set (deployP {{cookiecutter.Project_Name}})
set (SOURCE main.cpp hello.cpp)
set (HEADER hello.h)
add_executable(${deployP} ${SOURCE} ${HEADER} )
include_directories(${CMAKE_SOURCE_DIR}/lib) # include files from ProjectB
#target_link_libraries(projectA projectB)
#install(TARGETS projectA RUNTIME DESTINATION bin)
