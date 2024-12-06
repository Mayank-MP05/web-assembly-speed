### Commands

```bash

emcc grayscale.cpp -s WASM=1 -s EXPORTED_FUNCTIONS="['_hello_world']" -o grayscale.js

emcc hello.cpp -o hello.js -s EXPORTED_FUNCTIONS='["_hello_world"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]'


docker run --rm -it -v $(pwd):/src/asm-file emscripten/emsdk bash -c emcc /src/asm-file/hello.cpp -o /src/asm-file/hello.js


docker run --rm -it -v $(pwd):/src emscripten/emsdk bash -c "emcc /src/asm-file/hello.cpp -o /src/asm-file/hello.html"

docker run --rm -it -v $(pwd):/src emscripten/emsdk bash -c "emcc /src/cpp-compute/print-nos.cpp -o /src/cpp-compute/print-nos.js"


docker run --rm -it -v $(pwd):/src emscripten/emsdk bash -c "emcc /src/cpp-compute/print-nos.cpp -s EXPORTED_FUNCTIONS='['_printNos','_main']' -o /src/cpp-compute/print-nos.js"


docker run --rm -it -v $(pwd):/src emscripten/emsdk bash

```