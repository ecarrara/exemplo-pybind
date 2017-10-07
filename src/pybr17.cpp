// Copyright © 2017 Erle Carrara <carrara.erle@gmail.com>
// This work is free. You can redistribute it and/or modify it under the
// terms of the Do What The Fuck You Want To Public License, Version 2,
//              ^^^^^^^^^^^^^^^^^^^^^^^^^ :)
//       as published by Sam Hocevar. See http://www.wtfpl.net/ for more details.

#include <pybind11/pybind11.h>

int soma(int a, int b) {
    return a + b;
}

namespace py = pybind11;

PYBIND11_PLUGIN(pybr17) {
    py::module m("pybr17");
    m.def("soma", &soma, "Soma a + b.");
    return m.ptr();
}
