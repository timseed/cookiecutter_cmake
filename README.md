# CMake cookiecutter

As CMake, can be a little daunting at times. This cookie cutter will setup a project in the following manner


```text
   Proj_Name
      Proj_Name 
          (Proj_Name Executable)
      test  
          (Proj_Name Test Executable)
      lib 
           (Proj_Name library) 
```

There are only 3 files used (to keep this light/simple/easy to mod).

  - main.cpp 
  - hello.cpp
  - hello.h 

## Main Project 

This would build a "Hello-World" except it is called using **main.cpp**.

## Test Project 

Using Google Tests (CMake checks it is installed - but does not install GoogleTest).

Using
  - hello.cpp 

A stupid Test case is built

## Library 

Lets assume that we will create a library using 

  - hello.cpp 

This is built also.


# How to use ... 

Firstly you need to have **cookiecutter** installed ... 

Then the command would be 

    cookiecutter gh:timseed/cookiecutter_cmake 
    
You will then be asked 2 simple questions 

  - Name of the Project
  - Project authors name 

i.e. 

```bash
cookiecutter gh:timseed/cookiecutter_cmake
  [1/2] Project_Name (project_): cqww
  [2/2] Author (Tim Seed):
```
And now when I do a **find cqww** (the Name of the project_ in the example)

```text
find cqww
cqww
cqww/cqww
cqww/cqww/CMakeLists.txt
cqww/cqww/hello.cpp
cqww/cqww/hello.h
cqww/cqww/main.cpp
cqww/CMakeLists.txt
cqww/test
cqww/test/CMakeLists.txt
cqww/test/test.cpp
cqww/Readme.md
cqww/lib
cqww/lib/CMakeLists.txt
```

## So to build

It is a regualr CMake/C++ 

    cd cqww
    mkdir build
    cd build
    cmake ../
    make
    
    
# ToDo 

  - run the tests from *make*
  - Install headers
  - Install lib
  
  
# Use the cookiecutter template again

Cookiecutters are stashed on your machine 

     cookiecutter -l  
     
     
 Now you do not need to use git (gh:timseed/cookiecutter_cmake) use can just use the name
 
 


