# Node.JS Addons

[**Node.js Addons**](https://nodejs.org/api/addons.html) are dynamically-linked shared objects, written in C++, that can be loaded into Node.js using the require() function, and used just as if they were an ordinary Node.js module. They are used primarily to provide an interface between JavaScript running in Node.js and C/C++ libraries.

## Lib C/C++ struture

    .
    |-- lib
    |   `-- addon.cc    # Module node writed in C/C++ programming language
    |-- binding.gyp     # This file is used by node-gyp (a tool written specifically to compile Node.js Addons)
    `-- ...